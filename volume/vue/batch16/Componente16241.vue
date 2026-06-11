<template>
  <section class="panel-16241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16241");
const base = ref(16241);
const total = computed(() => base.value * 2);

function incrementar16241() {
  base.value++;
}
</script>
