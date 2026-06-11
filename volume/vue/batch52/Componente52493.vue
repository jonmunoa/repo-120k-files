<template>
  <section class="panel-52493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52493");
const base = ref(52493);
const total = computed(() => base.value * 2);

function incrementar52493() {
  base.value++;
}
</script>
