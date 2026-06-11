<template>
  <section class="panel-20173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20173");
const base = ref(20173);
const total = computed(() => base.value * 2);

function incrementar20173() {
  base.value++;
}
</script>
