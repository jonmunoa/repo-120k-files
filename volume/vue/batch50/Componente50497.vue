<template>
  <section class="panel-50497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50497");
const base = ref(50497);
const total = computed(() => base.value * 2);

function incrementar50497() {
  base.value++;
}
</script>
