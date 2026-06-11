<template>
  <section class="panel-45181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45181");
const base = ref(45181);
const total = computed(() => base.value * 2);

function incrementar45181() {
  base.value++;
}
</script>
