<template>
  <section class="panel-1241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1241");
const base = ref(1241);
const total = computed(() => base.value * 2);

function incrementar1241() {
  base.value++;
}
</script>
