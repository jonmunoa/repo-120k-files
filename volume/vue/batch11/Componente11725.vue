<template>
  <section class="panel-11725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11725");
const base = ref(11725);
const total = computed(() => base.value * 2);

function incrementar11725() {
  base.value++;
}
</script>
