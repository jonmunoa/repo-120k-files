<template>
  <section class="panel-52857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52857");
const base = ref(52857);
const total = computed(() => base.value * 2);

function incrementar52857() {
  base.value++;
}
</script>
