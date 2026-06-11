<template>
  <section class="panel-45425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45425");
const base = ref(45425);
const total = computed(() => base.value * 2);

function incrementar45425() {
  base.value++;
}
</script>
