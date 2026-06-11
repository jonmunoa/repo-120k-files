<template>
  <section class="panel-24857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24857");
const base = ref(24857);
const total = computed(() => base.value * 2);

function incrementar24857() {
  base.value++;
}
</script>
