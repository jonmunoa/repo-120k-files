<template>
  <section class="panel-31681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31681");
const base = ref(31681);
const total = computed(() => base.value * 2);

function incrementar31681() {
  base.value++;
}
</script>
