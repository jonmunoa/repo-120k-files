<template>
  <section class="panel-53733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53733");
const base = ref(53733);
const total = computed(() => base.value * 2);

function incrementar53733() {
  base.value++;
}
</script>
