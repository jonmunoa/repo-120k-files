<template>
  <section class="panel-44185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44185");
const base = ref(44185);
const total = computed(() => base.value * 2);

function incrementar44185() {
  base.value++;
}
</script>
