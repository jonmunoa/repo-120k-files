<template>
  <section class="panel-49893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49893");
const base = ref(49893);
const total = computed(() => base.value * 2);

function incrementar49893() {
  base.value++;
}
</script>
