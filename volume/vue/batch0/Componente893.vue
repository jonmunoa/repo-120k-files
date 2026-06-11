<template>
  <section class="panel-893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 893");
const base = ref(893);
const total = computed(() => base.value * 2);

function incrementar893() {
  base.value++;
}
</script>
