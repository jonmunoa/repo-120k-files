<template>
  <section class="panel-6249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6249");
const base = ref(6249);
const total = computed(() => base.value * 2);

function incrementar6249() {
  base.value++;
}
</script>
