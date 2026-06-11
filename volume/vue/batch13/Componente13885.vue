<template>
  <section class="panel-13885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13885");
const base = ref(13885);
const total = computed(() => base.value * 2);

function incrementar13885() {
  base.value++;
}
</script>
