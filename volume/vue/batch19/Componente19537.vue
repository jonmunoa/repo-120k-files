<template>
  <section class="panel-19537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19537");
const base = ref(19537);
const total = computed(() => base.value * 2);

function incrementar19537() {
  base.value++;
}
</script>
