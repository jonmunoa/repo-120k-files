<template>
  <section class="panel-19733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19733");
const base = ref(19733);
const total = computed(() => base.value * 2);

function incrementar19733() {
  base.value++;
}
</script>
