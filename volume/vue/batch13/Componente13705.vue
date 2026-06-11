<template>
  <section class="panel-13705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13705");
const base = ref(13705);
const total = computed(() => base.value * 2);

function incrementar13705() {
  base.value++;
}
</script>
