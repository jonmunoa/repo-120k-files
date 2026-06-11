<template>
  <section class="panel-3829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3829");
const base = ref(3829);
const total = computed(() => base.value * 2);

function incrementar3829() {
  base.value++;
}
</script>
