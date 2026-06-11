<template>
  <section class="panel-24097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24097");
const base = ref(24097);
const total = computed(() => base.value * 2);

function incrementar24097() {
  base.value++;
}
</script>
