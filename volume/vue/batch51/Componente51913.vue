<template>
  <section class="panel-51913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51913");
const base = ref(51913);
const total = computed(() => base.value * 2);

function incrementar51913() {
  base.value++;
}
</script>
