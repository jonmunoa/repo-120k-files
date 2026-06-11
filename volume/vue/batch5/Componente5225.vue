<template>
  <section class="panel-5225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5225");
const base = ref(5225);
const total = computed(() => base.value * 2);

function incrementar5225() {
  base.value++;
}
</script>
