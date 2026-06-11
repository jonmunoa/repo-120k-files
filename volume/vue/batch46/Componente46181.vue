<template>
  <section class="panel-46181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46181");
const base = ref(46181);
const total = computed(() => base.value * 2);

function incrementar46181() {
  base.value++;
}
</script>
