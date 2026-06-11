<template>
  <section class="panel-44649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44649");
const base = ref(44649);
const total = computed(() => base.value * 2);

function incrementar44649() {
  base.value++;
}
</script>
