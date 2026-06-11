<template>
  <section class="panel-6225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6225");
const base = ref(6225);
const total = computed(() => base.value * 2);

function incrementar6225() {
  base.value++;
}
</script>
