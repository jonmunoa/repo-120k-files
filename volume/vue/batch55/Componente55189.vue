<template>
  <section class="panel-55189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55189");
const base = ref(55189);
const total = computed(() => base.value * 2);

function incrementar55189() {
  base.value++;
}
</script>
