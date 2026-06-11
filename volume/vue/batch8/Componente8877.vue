<template>
  <section class="panel-8877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8877");
const base = ref(8877);
const total = computed(() => base.value * 2);

function incrementar8877() {
  base.value++;
}
</script>
