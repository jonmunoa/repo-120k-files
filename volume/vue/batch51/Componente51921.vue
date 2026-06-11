<template>
  <section class="panel-51921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51921");
const base = ref(51921);
const total = computed(() => base.value * 2);

function incrementar51921() {
  base.value++;
}
</script>
