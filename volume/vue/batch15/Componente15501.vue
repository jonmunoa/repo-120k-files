<template>
  <section class="panel-15501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15501");
const base = ref(15501);
const total = computed(() => base.value * 2);

function incrementar15501() {
  base.value++;
}
</script>
