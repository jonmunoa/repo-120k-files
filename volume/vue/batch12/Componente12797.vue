<template>
  <section class="panel-12797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12797");
const base = ref(12797);
const total = computed(() => base.value * 2);

function incrementar12797() {
  base.value++;
}
</script>
