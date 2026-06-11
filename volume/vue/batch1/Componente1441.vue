<template>
  <section class="panel-1441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1441");
const base = ref(1441);
const total = computed(() => base.value * 2);

function incrementar1441() {
  base.value++;
}
</script>
