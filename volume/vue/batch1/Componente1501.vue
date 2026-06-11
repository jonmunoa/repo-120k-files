<template>
  <section class="panel-1501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1501");
const base = ref(1501);
const total = computed(() => base.value * 2);

function incrementar1501() {
  base.value++;
}
</script>
