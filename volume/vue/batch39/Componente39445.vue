<template>
  <section class="panel-39445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39445");
const base = ref(39445);
const total = computed(() => base.value * 2);

function incrementar39445() {
  base.value++;
}
</script>
