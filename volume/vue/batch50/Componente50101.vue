<template>
  <section class="panel-50101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50101");
const base = ref(50101);
const total = computed(() => base.value * 2);

function incrementar50101() {
  base.value++;
}
</script>
