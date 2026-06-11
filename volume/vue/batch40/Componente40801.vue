<template>
  <section class="panel-40801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40801");
const base = ref(40801);
const total = computed(() => base.value * 2);

function incrementar40801() {
  base.value++;
}
</script>
