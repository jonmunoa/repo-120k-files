<template>
  <section class="panel-2829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2829");
const base = ref(2829);
const total = computed(() => base.value * 2);

function incrementar2829() {
  base.value++;
}
</script>
