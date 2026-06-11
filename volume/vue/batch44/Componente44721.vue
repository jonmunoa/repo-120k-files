<template>
  <section class="panel-44721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44721");
const base = ref(44721);
const total = computed(() => base.value * 2);

function incrementar44721() {
  base.value++;
}
</script>
