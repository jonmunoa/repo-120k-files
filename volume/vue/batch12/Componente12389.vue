<template>
  <section class="panel-12389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12389");
const base = ref(12389);
const total = computed(() => base.value * 2);

function incrementar12389() {
  base.value++;
}
</script>
