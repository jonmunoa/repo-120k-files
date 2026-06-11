<template>
  <section class="panel-125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 125");
const base = ref(125);
const total = computed(() => base.value * 2);

function incrementar125() {
  base.value++;
}
</script>
