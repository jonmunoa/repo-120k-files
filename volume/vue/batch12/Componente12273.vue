<template>
  <section class="panel-12273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12273");
const base = ref(12273);
const total = computed(() => base.value * 2);

function incrementar12273() {
  base.value++;
}
</script>
