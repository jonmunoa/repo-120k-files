<template>
  <section class="panel-12529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12529");
const base = ref(12529);
const total = computed(() => base.value * 2);

function incrementar12529() {
  base.value++;
}
</script>
