<template>
  <section class="panel-28269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28269");
const base = ref(28269);
const total = computed(() => base.value * 2);

function incrementar28269() {
  base.value++;
}
</script>
