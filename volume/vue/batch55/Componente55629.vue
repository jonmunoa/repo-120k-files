<template>
  <section class="panel-55629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55629");
const base = ref(55629);
const total = computed(() => base.value * 2);

function incrementar55629() {
  base.value++;
}
</script>
