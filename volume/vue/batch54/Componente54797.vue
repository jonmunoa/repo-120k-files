<template>
  <section class="panel-54797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54797");
const base = ref(54797);
const total = computed(() => base.value * 2);

function incrementar54797() {
  base.value++;
}
</script>
