<template>
  <section class="panel-11681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11681");
const base = ref(11681);
const total = computed(() => base.value * 2);

function incrementar11681() {
  base.value++;
}
</script>
