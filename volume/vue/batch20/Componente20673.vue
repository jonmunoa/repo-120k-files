<template>
  <section class="panel-20673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20673");
const base = ref(20673);
const total = computed(() => base.value * 2);

function incrementar20673() {
  base.value++;
}
</script>
