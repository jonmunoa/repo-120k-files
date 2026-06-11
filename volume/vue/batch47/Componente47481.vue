<template>
  <section class="panel-47481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47481");
const base = ref(47481);
const total = computed(() => base.value * 2);

function incrementar47481() {
  base.value++;
}
</script>
