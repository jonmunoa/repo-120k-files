<template>
  <section class="panel-13437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13437");
const base = ref(13437);
const total = computed(() => base.value * 2);

function incrementar13437() {
  base.value++;
}
</script>
