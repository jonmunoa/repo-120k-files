<template>
  <section class="panel-15829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15829");
const base = ref(15829);
const total = computed(() => base.value * 2);

function incrementar15829() {
  base.value++;
}
</script>
