<template>
  <section class="panel-34005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34005");
const base = ref(34005);
const total = computed(() => base.value * 2);

function incrementar34005() {
  base.value++;
}
</script>
