<template>
  <section class="panel-55441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55441");
const base = ref(55441);
const total = computed(() => base.value * 2);

function incrementar55441() {
  base.value++;
}
</script>
