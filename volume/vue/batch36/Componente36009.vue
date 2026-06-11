<template>
  <section class="panel-36009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36009");
const base = ref(36009);
const total = computed(() => base.value * 2);

function incrementar36009() {
  base.value++;
}
</script>
