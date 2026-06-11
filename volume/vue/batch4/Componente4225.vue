<template>
  <section class="panel-4225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4225");
const base = ref(4225);
const total = computed(() => base.value * 2);

function incrementar4225() {
  base.value++;
}
</script>
