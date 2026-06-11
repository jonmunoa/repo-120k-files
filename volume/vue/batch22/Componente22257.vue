<template>
  <section class="panel-22257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22257");
const base = ref(22257);
const total = computed(() => base.value * 2);

function incrementar22257() {
  base.value++;
}
</script>
