<template>
  <section class="panel-21557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21557");
const base = ref(21557);
const total = computed(() => base.value * 2);

function incrementar21557() {
  base.value++;
}
</script>
