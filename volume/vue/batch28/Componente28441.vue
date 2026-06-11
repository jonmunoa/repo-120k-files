<template>
  <section class="panel-28441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28441");
const base = ref(28441);
const total = computed(() => base.value * 2);

function incrementar28441() {
  base.value++;
}
</script>
