<template>
  <section class="panel-6273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6273");
const base = ref(6273);
const total = computed(() => base.value * 2);

function incrementar6273() {
  base.value++;
}
</script>
