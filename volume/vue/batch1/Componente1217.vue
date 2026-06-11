<template>
  <section class="panel-1217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1217");
const base = ref(1217);
const total = computed(() => base.value * 2);

function incrementar1217() {
  base.value++;
}
</script>
