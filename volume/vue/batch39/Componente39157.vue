<template>
  <section class="panel-39157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39157");
const base = ref(39157);
const total = computed(() => base.value * 2);

function incrementar39157() {
  base.value++;
}
</script>
