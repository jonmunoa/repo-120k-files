<template>
  <section class="panel-733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 733");
const base = ref(733);
const total = computed(() => base.value * 2);

function incrementar733() {
  base.value++;
}
</script>
