<template>
  <section class="panel-15441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15441");
const base = ref(15441);
const total = computed(() => base.value * 2);

function incrementar15441() {
  base.value++;
}
</script>
