<template>
  <section class="panel-38085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38085");
const base = ref(38085);
const total = computed(() => base.value * 2);

function incrementar38085() {
  base.value++;
}
</script>
