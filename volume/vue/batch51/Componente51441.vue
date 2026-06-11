<template>
  <section class="panel-51441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51441");
const base = ref(51441);
const total = computed(() => base.value * 2);

function incrementar51441() {
  base.value++;
}
</script>
