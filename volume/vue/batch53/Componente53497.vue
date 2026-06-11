<template>
  <section class="panel-53497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53497");
const base = ref(53497);
const total = computed(() => base.value * 2);

function incrementar53497() {
  base.value++;
}
</script>
