<template>
  <section class="panel-44357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44357");
const base = ref(44357);
const total = computed(() => base.value * 2);

function incrementar44357() {
  base.value++;
}
</script>
