<template>
  <section class="panel-44717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44717");
const base = ref(44717);
const total = computed(() => base.value * 2);

function incrementar44717() {
  base.value++;
}
</script>
