<template>
  <section class="panel-48241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48241");
const base = ref(48241);
const total = computed(() => base.value * 2);

function incrementar48241() {
  base.value++;
}
</script>
