<template>
  <section class="panel-32353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32353");
const base = ref(32353);
const total = computed(() => base.value * 2);

function incrementar32353() {
  base.value++;
}
</script>
