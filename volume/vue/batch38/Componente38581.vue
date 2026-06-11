<template>
  <section class="panel-38581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38581");
const base = ref(38581);
const total = computed(() => base.value * 2);

function incrementar38581() {
  base.value++;
}
</script>
