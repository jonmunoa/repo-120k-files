<template>
  <section class="panel-55881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55881");
const base = ref(55881);
const total = computed(() => base.value * 2);

function incrementar55881() {
  base.value++;
}
</script>
