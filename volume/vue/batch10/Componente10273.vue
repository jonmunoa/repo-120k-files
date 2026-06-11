<template>
  <section class="panel-10273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10273");
const base = ref(10273);
const total = computed(() => base.value * 2);

function incrementar10273() {
  base.value++;
}
</script>
