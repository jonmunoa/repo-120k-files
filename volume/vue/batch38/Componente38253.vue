<template>
  <section class="panel-38253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38253");
const base = ref(38253);
const total = computed(() => base.value * 2);

function incrementar38253() {
  base.value++;
}
</script>
