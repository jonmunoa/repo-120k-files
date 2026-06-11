<template>
  <section class="panel-8441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8441");
const base = ref(8441);
const total = computed(() => base.value * 2);

function incrementar8441() {
  base.value++;
}
</script>
