<template>
  <section class="panel-10481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10481");
const base = ref(10481);
const total = computed(() => base.value * 2);

function incrementar10481() {
  base.value++;
}
</script>
