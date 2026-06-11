<template>
  <section class="panel-15877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15877");
const base = ref(15877);
const total = computed(() => base.value * 2);

function incrementar15877() {
  base.value++;
}
</script>
