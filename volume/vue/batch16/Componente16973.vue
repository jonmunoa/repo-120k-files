<template>
  <section class="panel-16973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16973");
const base = ref(16973);
const total = computed(() => base.value * 2);

function incrementar16973() {
  base.value++;
}
</script>
