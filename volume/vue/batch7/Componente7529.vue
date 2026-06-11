<template>
  <section class="panel-7529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7529");
const base = ref(7529);
const total = computed(() => base.value * 2);

function incrementar7529() {
  base.value++;
}
</script>
