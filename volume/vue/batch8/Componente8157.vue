<template>
  <section class="panel-8157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8157");
const base = ref(8157);
const total = computed(() => base.value * 2);

function incrementar8157() {
  base.value++;
}
</script>
