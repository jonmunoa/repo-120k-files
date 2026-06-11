<template>
  <section class="panel-39441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39441");
const base = ref(39441);
const total = computed(() => base.value * 2);

function incrementar39441() {
  base.value++;
}
</script>
