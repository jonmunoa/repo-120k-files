<template>
  <section class="panel-55569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55569");
const base = ref(55569);
const total = computed(() => base.value * 2);

function incrementar55569() {
  base.value++;
}
</script>
