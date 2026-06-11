<template>
  <section class="panel-29849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29849");
const base = ref(29849);
const total = computed(() => base.value * 2);

function incrementar29849() {
  base.value++;
}
</script>
