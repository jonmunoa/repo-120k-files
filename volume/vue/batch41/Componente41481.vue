<template>
  <section class="panel-41481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41481");
const base = ref(41481);
const total = computed(() => base.value * 2);

function incrementar41481() {
  base.value++;
}
</script>
