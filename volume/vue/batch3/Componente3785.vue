<template>
  <section class="panel-3785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3785");
const base = ref(3785);
const total = computed(() => base.value * 2);

function incrementar3785() {
  base.value++;
}
</script>
