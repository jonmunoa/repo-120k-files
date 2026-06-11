<template>
  <section class="panel-52253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52253");
const base = ref(52253);
const total = computed(() => base.value * 2);

function incrementar52253() {
  base.value++;
}
</script>
