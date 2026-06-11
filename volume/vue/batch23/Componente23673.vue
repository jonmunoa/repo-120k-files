<template>
  <section class="panel-23673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23673");
const base = ref(23673);
const total = computed(() => base.value * 2);

function incrementar23673() {
  base.value++;
}
</script>
