<template>
  <section class="panel-12157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12157");
const base = ref(12157);
const total = computed(() => base.value * 2);

function incrementar12157() {
  base.value++;
}
</script>
