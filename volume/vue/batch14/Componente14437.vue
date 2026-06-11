<template>
  <section class="panel-14437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14437");
const base = ref(14437);
const total = computed(() => base.value * 2);

function incrementar14437() {
  base.value++;
}
</script>
