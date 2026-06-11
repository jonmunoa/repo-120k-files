<template>
  <section class="panel-45273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45273");
const base = ref(45273);
const total = computed(() => base.value * 2);

function incrementar45273() {
  base.value++;
}
</script>
