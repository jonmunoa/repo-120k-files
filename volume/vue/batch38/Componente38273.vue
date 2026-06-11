<template>
  <section class="panel-38273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38273");
const base = ref(38273);
const total = computed(() => base.value * 2);

function incrementar38273() {
  base.value++;
}
</script>
