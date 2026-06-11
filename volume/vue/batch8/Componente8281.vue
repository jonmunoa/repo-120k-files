<template>
  <section class="panel-8281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8281");
const base = ref(8281);
const total = computed(() => base.value * 2);

function incrementar8281() {
  base.value++;
}
</script>
