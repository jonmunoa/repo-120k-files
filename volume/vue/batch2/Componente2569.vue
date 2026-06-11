<template>
  <section class="panel-2569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2569");
const base = ref(2569);
const total = computed(() => base.value * 2);

function incrementar2569() {
  base.value++;
}
</script>
