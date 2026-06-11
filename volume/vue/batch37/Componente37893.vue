<template>
  <section class="panel-37893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37893");
const base = ref(37893);
const total = computed(() => base.value * 2);

function incrementar37893() {
  base.value++;
}
</script>
