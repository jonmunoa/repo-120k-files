<template>
  <section class="panel-54501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54501");
const base = ref(54501);
const total = computed(() => base.value * 2);

function incrementar54501() {
  base.value++;
}
</script>
