<template>
  <section class="panel-52445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52445");
const base = ref(52445);
const total = computed(() => base.value * 2);

function incrementar52445() {
  base.value++;
}
</script>
