<template>
  <section class="panel-39193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39193");
const base = ref(39193);
const total = computed(() => base.value * 2);

function incrementar39193() {
  base.value++;
}
</script>
