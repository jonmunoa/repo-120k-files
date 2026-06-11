<template>
  <section class="panel-30829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30829");
const base = ref(30829);
const total = computed(() => base.value * 2);

function incrementar30829() {
  base.value++;
}
</script>
