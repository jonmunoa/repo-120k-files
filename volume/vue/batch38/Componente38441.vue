<template>
  <section class="panel-38441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38441");
const base = ref(38441);
const total = computed(() => base.value * 2);

function incrementar38441() {
  base.value++;
}
</script>
