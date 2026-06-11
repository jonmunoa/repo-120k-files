<template>
  <section class="panel-17689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17689");
const base = ref(17689);
const total = computed(() => base.value * 2);

function incrementar17689() {
  base.value++;
}
</script>
