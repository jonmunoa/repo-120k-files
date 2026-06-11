<template>
  <section class="panel-39425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39425");
const base = ref(39425);
const total = computed(() => base.value * 2);

function incrementar39425() {
  base.value++;
}
</script>
