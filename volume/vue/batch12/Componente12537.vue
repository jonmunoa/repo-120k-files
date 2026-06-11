<template>
  <section class="panel-12537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12537");
const base = ref(12537);
const total = computed(() => base.value * 2);

function incrementar12537() {
  base.value++;
}
</script>
