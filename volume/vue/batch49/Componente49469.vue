<template>
  <section class="panel-49469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49469");
const base = ref(49469);
const total = computed(() => base.value * 2);

function incrementar49469() {
  base.value++;
}
</script>
