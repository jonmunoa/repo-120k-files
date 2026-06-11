<template>
  <section class="panel-681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 681");
const base = ref(681);
const total = computed(() => base.value * 2);

function incrementar681() {
  base.value++;
}
</script>
