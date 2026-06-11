<template>
  <section class="panel-13581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13581");
const base = ref(13581);
const total = computed(() => base.value * 2);

function incrementar13581() {
  base.value++;
}
</script>
