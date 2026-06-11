<template>
  <section class="panel-56673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56673");
const base = ref(56673);
const total = computed(() => base.value * 2);

function incrementar56673() {
  base.value++;
}
</script>
