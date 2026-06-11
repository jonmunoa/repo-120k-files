<template>
  <section class="panel-17177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17177");
const base = ref(17177);
const total = computed(() => base.value * 2);

function incrementar17177() {
  base.value++;
}
</script>
