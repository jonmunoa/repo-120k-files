<template>
  <section class="panel-481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 481");
const base = ref(481);
const total = computed(() => base.value * 2);

function incrementar481() {
  base.value++;
}
</script>
