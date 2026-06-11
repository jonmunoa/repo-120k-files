<template>
  <section class="panel-11581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11581");
const base = ref(11581);
const total = computed(() => base.value * 2);

function incrementar11581() {
  base.value++;
}
</script>
