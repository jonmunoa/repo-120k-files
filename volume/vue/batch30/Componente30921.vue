<template>
  <section class="panel-30921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30921");
const base = ref(30921);
const total = computed(() => base.value * 2);

function incrementar30921() {
  base.value++;
}
</script>
