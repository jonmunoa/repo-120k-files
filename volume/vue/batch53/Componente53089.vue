<template>
  <section class="panel-53089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53089");
const base = ref(53089);
const total = computed(() => base.value * 2);

function incrementar53089() {
  base.value++;
}
</script>
