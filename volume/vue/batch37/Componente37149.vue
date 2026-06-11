<template>
  <section class="panel-37149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37149");
const base = ref(37149);
const total = computed(() => base.value * 2);

function incrementar37149() {
  base.value++;
}
</script>
