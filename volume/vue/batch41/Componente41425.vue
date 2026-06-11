<template>
  <section class="panel-41425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41425");
const base = ref(41425);
const total = computed(() => base.value * 2);

function incrementar41425() {
  base.value++;
}
</script>
