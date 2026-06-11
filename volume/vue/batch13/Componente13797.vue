<template>
  <section class="panel-13797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13797");
const base = ref(13797);
const total = computed(() => base.value * 2);

function incrementar13797() {
  base.value++;
}
</script>
