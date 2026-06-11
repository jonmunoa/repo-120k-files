<template>
  <section class="panel-8305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8305");
const base = ref(8305);
const total = computed(() => base.value * 2);

function incrementar8305() {
  base.value++;
}
</script>
