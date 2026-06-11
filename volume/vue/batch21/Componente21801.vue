<template>
  <section class="panel-21801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21801");
const base = ref(21801);
const total = computed(() => base.value * 2);

function incrementar21801() {
  base.value++;
}
</script>
