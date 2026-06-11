<template>
  <section class="panel-51189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51189");
const base = ref(51189);
const total = computed(() => base.value * 2);

function incrementar51189() {
  base.value++;
}
</script>
