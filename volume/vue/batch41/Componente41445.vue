<template>
  <section class="panel-41445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41445");
const base = ref(41445);
const total = computed(() => base.value * 2);

function incrementar41445() {
  base.value++;
}
</script>
