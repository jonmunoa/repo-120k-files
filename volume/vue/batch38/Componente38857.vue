<template>
  <section class="panel-38857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38857");
const base = ref(38857);
const total = computed(() => base.value * 2);

function incrementar38857() {
  base.value++;
}
</script>
