<template>
  <section class="panel-13793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13793");
const base = ref(13793);
const total = computed(() => base.value * 2);

function incrementar13793() {
  base.value++;
}
</script>
