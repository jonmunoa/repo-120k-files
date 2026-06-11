<template>
  <section class="panel-22341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22341");
const base = ref(22341);
const total = computed(() => base.value * 2);

function incrementar22341() {
  base.value++;
}
</script>
