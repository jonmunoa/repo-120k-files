<template>
  <section class="panel-13741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13741");
const base = ref(13741);
const total = computed(() => base.value * 2);

function incrementar13741() {
  base.value++;
}
</script>
