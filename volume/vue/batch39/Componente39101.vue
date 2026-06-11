<template>
  <section class="panel-39101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39101");
const base = ref(39101);
const total = computed(() => base.value * 2);

function incrementar39101() {
  base.value++;
}
</script>
