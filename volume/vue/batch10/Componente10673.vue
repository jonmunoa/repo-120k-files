<template>
  <section class="panel-10673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10673");
const base = ref(10673);
const total = computed(() => base.value * 2);

function incrementar10673() {
  base.value++;
}
</script>
