<template>
  <section class="panel-1185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1185");
const base = ref(1185);
const total = computed(() => base.value * 2);

function incrementar1185() {
  base.value++;
}
</script>
