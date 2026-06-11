<template>
  <section class="panel-3893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3893");
const base = ref(3893);
const total = computed(() => base.value * 2);

function incrementar3893() {
  base.value++;
}
</script>
