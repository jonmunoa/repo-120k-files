<template>
  <section class="panel-4681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4681");
const base = ref(4681);
const total = computed(() => base.value * 2);

function incrementar4681() {
  base.value++;
}
</script>
