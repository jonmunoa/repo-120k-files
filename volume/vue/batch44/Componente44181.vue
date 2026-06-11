<template>
  <section class="panel-44181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44181");
const base = ref(44181);
const total = computed(() => base.value * 2);

function incrementar44181() {
  base.value++;
}
</script>
