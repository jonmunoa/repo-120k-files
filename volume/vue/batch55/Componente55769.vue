<template>
  <section class="panel-55769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55769");
const base = ref(55769);
const total = computed(() => base.value * 2);

function incrementar55769() {
  base.value++;
}
</script>
