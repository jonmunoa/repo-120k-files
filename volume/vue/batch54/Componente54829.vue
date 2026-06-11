<template>
  <section class="panel-54829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54829");
const base = ref(54829);
const total = computed(() => base.value * 2);

function incrementar54829() {
  base.value++;
}
</script>
