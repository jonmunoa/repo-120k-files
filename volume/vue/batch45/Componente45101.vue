<template>
  <section class="panel-45101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45101");
const base = ref(45101);
const total = computed(() => base.value * 2);

function incrementar45101() {
  base.value++;
}
</script>
