<template>
  <section class="panel-36157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36157");
const base = ref(36157);
const total = computed(() => base.value * 2);

function incrementar36157() {
  base.value++;
}
</script>
