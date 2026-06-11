<template>
  <section class="panel-3121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3121");
const base = ref(3121);
const total = computed(() => base.value * 2);

function incrementar3121() {
  base.value++;
}
</script>
