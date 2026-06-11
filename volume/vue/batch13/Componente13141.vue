<template>
  <section class="panel-13141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13141");
const base = ref(13141);
const total = computed(() => base.value * 2);

function incrementar13141() {
  base.value++;
}
</script>
