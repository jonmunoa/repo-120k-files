<template>
  <section class="panel-44829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44829");
const base = ref(44829);
const total = computed(() => base.value * 2);

function incrementar44829() {
  base.value++;
}
</script>
