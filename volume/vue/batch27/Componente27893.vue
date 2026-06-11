<template>
  <section class="panel-27893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27893");
const base = ref(27893);
const total = computed(() => base.value * 2);

function incrementar27893() {
  base.value++;
}
</script>
