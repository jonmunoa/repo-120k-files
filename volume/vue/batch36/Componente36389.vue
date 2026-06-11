<template>
  <section class="panel-36389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36389");
const base = ref(36389);
const total = computed(() => base.value * 2);

function incrementar36389() {
  base.value++;
}
</script>
