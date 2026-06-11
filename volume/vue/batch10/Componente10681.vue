<template>
  <section class="panel-10681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10681");
const base = ref(10681);
const total = computed(() => base.value * 2);

function incrementar10681() {
  base.value++;
}
</script>
