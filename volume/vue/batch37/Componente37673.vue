<template>
  <section class="panel-37673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37673");
const base = ref(37673);
const total = computed(() => base.value * 2);

function incrementar37673() {
  base.value++;
}
</script>
