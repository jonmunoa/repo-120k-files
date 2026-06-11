<template>
  <section class="panel-51893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51893");
const base = ref(51893);
const total = computed(() => base.value * 2);

function incrementar51893() {
  base.value++;
}
</script>
