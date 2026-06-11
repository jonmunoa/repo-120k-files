<template>
  <section class="panel-8921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8921");
const base = ref(8921);
const total = computed(() => base.value * 2);

function incrementar8921() {
  base.value++;
}
</script>
