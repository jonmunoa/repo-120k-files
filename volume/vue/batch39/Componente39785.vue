<template>
  <section class="panel-39785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39785");
const base = ref(39785);
const total = computed(() => base.value * 2);

function incrementar39785() {
  base.value++;
}
</script>
