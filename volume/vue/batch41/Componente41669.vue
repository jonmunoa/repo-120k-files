<template>
  <section class="panel-41669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41669");
const base = ref(41669);
const total = computed(() => base.value * 2);

function incrementar41669() {
  base.value++;
}
</script>
