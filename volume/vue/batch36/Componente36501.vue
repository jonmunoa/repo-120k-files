<template>
  <section class="panel-36501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36501");
const base = ref(36501);
const total = computed(() => base.value * 2);

function incrementar36501() {
  base.value++;
}
</script>
