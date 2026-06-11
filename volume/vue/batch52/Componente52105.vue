<template>
  <section class="panel-52105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52105");
const base = ref(52105);
const total = computed(() => base.value * 2);

function incrementar52105() {
  base.value++;
}
</script>
