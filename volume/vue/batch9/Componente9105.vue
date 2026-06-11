<template>
  <section class="panel-9105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9105");
const base = ref(9105);
const total = computed(() => base.value * 2);

function incrementar9105() {
  base.value++;
}
</script>
