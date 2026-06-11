<template>
  <section class="panel-5089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5089");
const base = ref(5089);
const total = computed(() => base.value * 2);

function incrementar5089() {
  base.value++;
}
</script>
