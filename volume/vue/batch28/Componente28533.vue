<template>
  <section class="panel-28533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28533");
const base = ref(28533);
const total = computed(() => base.value * 2);

function incrementar28533() {
  base.value++;
}
</script>
