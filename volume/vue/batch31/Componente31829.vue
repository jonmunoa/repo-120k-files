<template>
  <section class="panel-31829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31829");
const base = ref(31829);
const total = computed(() => base.value * 2);

function incrementar31829() {
  base.value++;
}
</script>
