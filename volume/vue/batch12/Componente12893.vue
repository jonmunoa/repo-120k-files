<template>
  <section class="panel-12893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12893");
const base = ref(12893);
const total = computed(() => base.value * 2);

function incrementar12893() {
  base.value++;
}
</script>
