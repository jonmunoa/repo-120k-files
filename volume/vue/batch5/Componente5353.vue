<template>
  <section class="panel-5353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5353");
const base = ref(5353);
const total = computed(() => base.value * 2);

function incrementar5353() {
  base.value++;
}
</script>
