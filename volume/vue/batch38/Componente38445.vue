<template>
  <section class="panel-38445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38445");
const base = ref(38445);
const total = computed(() => base.value * 2);

function incrementar38445() {
  base.value++;
}
</script>
