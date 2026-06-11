<template>
  <section class="panel-54273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54273");
const base = ref(54273);
const total = computed(() => base.value * 2);

function incrementar54273() {
  base.value++;
}
</script>
