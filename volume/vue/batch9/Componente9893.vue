<template>
  <section class="panel-9893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9893");
const base = ref(9893);
const total = computed(() => base.value * 2);

function incrementar9893() {
  base.value++;
}
</script>
