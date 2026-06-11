<template>
  <section class="panel-1425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1425");
const base = ref(1425);
const total = computed(() => base.value * 2);

function incrementar1425() {
  base.value++;
}
</script>
