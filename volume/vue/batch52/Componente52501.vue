<template>
  <section class="panel-52501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52501");
const base = ref(52501);
const total = computed(() => base.value * 2);

function incrementar52501() {
  base.value++;
}
</script>
