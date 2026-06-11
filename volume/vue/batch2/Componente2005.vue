<template>
  <section class="panel-2005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2005");
const base = ref(2005);
const total = computed(() => base.value * 2);

function incrementar2005() {
  base.value++;
}
</script>
