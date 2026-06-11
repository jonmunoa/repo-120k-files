<template>
  <section class="panel-8721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8721");
const base = ref(8721);
const total = computed(() => base.value * 2);

function incrementar8721() {
  base.value++;
}
</script>
