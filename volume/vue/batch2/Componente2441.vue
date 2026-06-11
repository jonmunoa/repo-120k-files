<template>
  <section class="panel-2441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2441");
const base = ref(2441);
const total = computed(() => base.value * 2);

function incrementar2441() {
  base.value++;
}
</script>
