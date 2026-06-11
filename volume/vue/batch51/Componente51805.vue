<template>
  <section class="panel-51805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51805");
const base = ref(51805);
const total = computed(() => base.value * 2);

function incrementar51805() {
  base.value++;
}
</script>
