<template>
  <section class="panel-28525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28525");
const base = ref(28525);
const total = computed(() => base.value * 2);

function incrementar28525() {
  base.value++;
}
</script>
