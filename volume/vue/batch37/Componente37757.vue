<template>
  <section class="panel-37757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37757");
const base = ref(37757);
const total = computed(() => base.value * 2);

function incrementar37757() {
  base.value++;
}
</script>
