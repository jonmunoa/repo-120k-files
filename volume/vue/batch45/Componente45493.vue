<template>
  <section class="panel-45493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45493");
const base = ref(45493);
const total = computed(() => base.value * 2);

function incrementar45493() {
  base.value++;
}
</script>
