<template>
  <section class="panel-13489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13489");
const base = ref(13489);
const total = computed(() => base.value * 2);

function incrementar13489() {
  base.value++;
}
</script>
