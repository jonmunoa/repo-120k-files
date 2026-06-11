<template>
  <section class="panel-48089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48089");
const base = ref(48089);
const total = computed(() => base.value * 2);

function incrementar48089() {
  base.value++;
}
</script>
