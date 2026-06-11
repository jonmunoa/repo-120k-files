<template>
  <section class="panel-43073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43073");
const base = ref(43073);
const total = computed(() => base.value * 2);

function incrementar43073() {
  base.value++;
}
</script>
