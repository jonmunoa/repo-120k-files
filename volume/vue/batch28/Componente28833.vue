<template>
  <section class="panel-28833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28833");
const base = ref(28833);
const total = computed(() => base.value * 2);

function incrementar28833() {
  base.value++;
}
</script>
