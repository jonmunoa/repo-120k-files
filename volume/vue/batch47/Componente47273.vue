<template>
  <section class="panel-47273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47273");
const base = ref(47273);
const total = computed(() => base.value * 2);

function incrementar47273() {
  base.value++;
}
</script>
