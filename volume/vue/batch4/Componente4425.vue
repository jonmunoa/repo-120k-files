<template>
  <section class="panel-4425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4425");
const base = ref(4425);
const total = computed(() => base.value * 2);

function incrementar4425() {
  base.value++;
}
</script>
