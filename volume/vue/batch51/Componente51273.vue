<template>
  <section class="panel-51273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51273");
const base = ref(51273);
const total = computed(() => base.value * 2);

function incrementar51273() {
  base.value++;
}
</script>
