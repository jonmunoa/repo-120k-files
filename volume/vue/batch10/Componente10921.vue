<template>
  <section class="panel-10921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10921");
const base = ref(10921);
const total = computed(() => base.value * 2);

function incrementar10921() {
  base.value++;
}
</script>
