<template>
  <section class="panel-29193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29193");
const base = ref(29193);
const total = computed(() => base.value * 2);

function incrementar29193() {
  base.value++;
}
</script>
