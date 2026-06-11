<template>
  <section class="panel-20893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20893");
const base = ref(20893);
const total = computed(() => base.value * 2);

function incrementar20893() {
  base.value++;
}
</script>
