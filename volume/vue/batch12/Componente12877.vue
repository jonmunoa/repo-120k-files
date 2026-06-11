<template>
  <section class="panel-12877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12877");
const base = ref(12877);
const total = computed(() => base.value * 2);

function incrementar12877() {
  base.value++;
}
</script>
