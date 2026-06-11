<template>
  <section class="panel-47673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47673");
const base = ref(47673);
const total = computed(() => base.value * 2);

function incrementar47673() {
  base.value++;
}
</script>
