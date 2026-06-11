<template>
  <section class="panel-22449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22449");
const base = ref(22449);
const total = computed(() => base.value * 2);

function incrementar22449() {
  base.value++;
}
</script>
