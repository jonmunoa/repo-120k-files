<template>
  <section class="panel-3537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3537");
const base = ref(3537);
const total = computed(() => base.value * 2);

function incrementar3537() {
  base.value++;
}
</script>
