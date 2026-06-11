<template>
  <section class="panel-28617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28617");
const base = ref(28617);
const total = computed(() => base.value * 2);

function incrementar28617() {
  base.value++;
}
</script>
