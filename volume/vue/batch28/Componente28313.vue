<template>
  <section class="panel-28313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28313");
const base = ref(28313);
const total = computed(() => base.value * 2);

function incrementar28313() {
  base.value++;
}
</script>
