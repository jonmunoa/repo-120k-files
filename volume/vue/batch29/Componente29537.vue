<template>
  <section class="panel-29537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29537");
const base = ref(29537);
const total = computed(() => base.value * 2);

function incrementar29537() {
  base.value++;
}
</script>
