<template>
  <section class="panel-22149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22149");
const base = ref(22149);
const total = computed(() => base.value * 2);

function incrementar22149() {
  base.value++;
}
</script>
