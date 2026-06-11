<template>
  <section class="panel-54237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54237");
const base = ref(54237);
const total = computed(() => base.value * 2);

function incrementar54237() {
  base.value++;
}
</script>
