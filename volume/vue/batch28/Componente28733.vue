<template>
  <section class="panel-28733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28733");
const base = ref(28733);
const total = computed(() => base.value * 2);

function incrementar28733() {
  base.value++;
}
</script>
