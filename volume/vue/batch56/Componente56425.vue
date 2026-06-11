<template>
  <section class="panel-56425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56425");
const base = ref(56425);
const total = computed(() => base.value * 2);

function incrementar56425() {
  base.value++;
}
</script>
