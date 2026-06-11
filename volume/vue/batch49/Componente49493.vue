<template>
  <section class="panel-49493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49493");
const base = ref(49493);
const total = computed(() => base.value * 2);

function incrementar49493() {
  base.value++;
}
</script>
