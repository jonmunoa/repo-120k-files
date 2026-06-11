<template>
  <section class="panel-56893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56893");
const base = ref(56893);
const total = computed(() => base.value * 2);

function incrementar56893() {
  base.value++;
}
</script>
