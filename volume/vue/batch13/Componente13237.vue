<template>
  <section class="panel-13237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13237");
const base = ref(13237);
const total = computed(() => base.value * 2);

function incrementar13237() {
  base.value++;
}
</script>
