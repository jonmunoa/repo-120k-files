<template>
  <section class="panel-9681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9681");
const base = ref(9681);
const total = computed(() => base.value * 2);

function incrementar9681() {
  base.value++;
}
</script>
