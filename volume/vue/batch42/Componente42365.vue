<template>
  <section class="panel-42365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42365");
const base = ref(42365);
const total = computed(() => base.value * 2);

function incrementar42365() {
  base.value++;
}
</script>
