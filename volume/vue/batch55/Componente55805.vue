<template>
  <section class="panel-55805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55805");
const base = ref(55805);
const total = computed(() => base.value * 2);

function incrementar55805() {
  base.value++;
}
</script>
