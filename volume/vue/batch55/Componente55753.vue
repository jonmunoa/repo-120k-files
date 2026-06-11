<template>
  <section class="panel-55753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55753");
const base = ref(55753);
const total = computed(() => base.value * 2);

function incrementar55753() {
  base.value++;
}
</script>
