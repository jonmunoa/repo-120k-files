<template>
  <section class="panel-6393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6393");
const base = ref(6393);
const total = computed(() => base.value * 2);

function incrementar6393() {
  base.value++;
}
</script>
