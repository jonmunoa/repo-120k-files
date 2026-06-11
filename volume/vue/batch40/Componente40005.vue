<template>
  <section class="panel-40005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40005");
const base = ref(40005);
const total = computed(() => base.value * 2);

function incrementar40005() {
  base.value++;
}
</script>
