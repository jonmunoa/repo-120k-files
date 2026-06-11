<template>
  <section class="panel-17953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17953");
const base = ref(17953);
const total = computed(() => base.value * 2);

function incrementar17953() {
  base.value++;
}
</script>
