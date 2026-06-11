<template>
  <section class="panel-44157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44157");
const base = ref(44157);
const total = computed(() => base.value * 2);

function incrementar44157() {
  base.value++;
}
</script>
