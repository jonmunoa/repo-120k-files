<template>
  <section class="panel-19441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19441");
const base = ref(19441);
const total = computed(() => base.value * 2);

function incrementar19441() {
  base.value++;
}
</script>
