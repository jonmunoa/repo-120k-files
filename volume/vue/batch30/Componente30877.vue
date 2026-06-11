<template>
  <section class="panel-30877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30877");
const base = ref(30877);
const total = computed(() => base.value * 2);

function incrementar30877() {
  base.value++;
}
</script>
