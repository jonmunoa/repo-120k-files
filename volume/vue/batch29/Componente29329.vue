<template>
  <section class="panel-29329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29329");
const base = ref(29329);
const total = computed(() => base.value * 2);

function incrementar29329() {
  base.value++;
}
</script>
