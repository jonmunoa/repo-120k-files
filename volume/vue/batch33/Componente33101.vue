<template>
  <section class="panel-33101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33101");
const base = ref(33101);
const total = computed(() => base.value * 2);

function incrementar33101() {
  base.value++;
}
</script>
