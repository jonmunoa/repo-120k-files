<template>
  <section class="panel-50725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50725");
const base = ref(50725);
const total = computed(() => base.value * 2);

function incrementar50725() {
  base.value++;
}
</script>
