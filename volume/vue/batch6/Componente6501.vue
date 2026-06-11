<template>
  <section class="panel-6501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6501");
const base = ref(6501);
const total = computed(() => base.value * 2);

function incrementar6501() {
  base.value++;
}
</script>
