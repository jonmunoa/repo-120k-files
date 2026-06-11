<template>
  <section class="panel-49733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49733");
const base = ref(49733);
const total = computed(() => base.value * 2);

function incrementar49733() {
  base.value++;
}
</script>
