<template>
  <section class="panel-20229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20229");
const base = ref(20229);
const total = computed(() => base.value * 2);

function incrementar20229() {
  base.value++;
}
</script>
