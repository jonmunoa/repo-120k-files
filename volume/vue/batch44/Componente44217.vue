<template>
  <section class="panel-44217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44217");
const base = ref(44217);
const total = computed(() => base.value * 2);

function incrementar44217() {
  base.value++;
}
</script>
