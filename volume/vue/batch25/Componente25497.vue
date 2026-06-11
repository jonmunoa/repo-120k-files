<template>
  <section class="panel-25497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25497");
const base = ref(25497);
const total = computed(() => base.value * 2);

function incrementar25497() {
  base.value++;
}
</script>
