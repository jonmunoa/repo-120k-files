<template>
  <section class="panel-28581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28581");
const base = ref(28581);
const total = computed(() => base.value * 2);

function incrementar28581() {
  base.value++;
}
</script>
