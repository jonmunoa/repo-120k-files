<template>
  <section class="panel-16921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16921");
const base = ref(16921);
const total = computed(() => base.value * 2);

function incrementar16921() {
  base.value++;
}
</script>
