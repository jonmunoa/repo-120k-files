<template>
  <section class="panel-24101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24101");
const base = ref(24101);
const total = computed(() => base.value * 2);

function incrementar24101() {
  base.value++;
}
</script>
