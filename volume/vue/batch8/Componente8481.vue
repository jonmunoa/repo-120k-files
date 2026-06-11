<template>
  <section class="panel-8481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8481");
const base = ref(8481);
const total = computed(() => base.value * 2);

function incrementar8481() {
  base.value++;
}
</script>
