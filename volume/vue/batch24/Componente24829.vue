<template>
  <section class="panel-24829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24829");
const base = ref(24829);
const total = computed(() => base.value * 2);

function incrementar24829() {
  base.value++;
}
</script>
