<template>
  <section class="panel-12141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12141");
const base = ref(12141);
const total = computed(() => base.value * 2);

function incrementar12141() {
  base.value++;
}
</script>
