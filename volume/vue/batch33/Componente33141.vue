<template>
  <section class="panel-33141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33141");
const base = ref(33141);
const total = computed(() => base.value * 2);

function incrementar33141() {
  base.value++;
}
</script>
