<template>
  <section class="panel-20721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20721");
const base = ref(20721);
const total = computed(() => base.value * 2);

function incrementar20721() {
  base.value++;
}
</script>
