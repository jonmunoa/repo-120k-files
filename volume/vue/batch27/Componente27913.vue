<template>
  <section class="panel-27913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27913");
const base = ref(27913);
const total = computed(() => base.value * 2);

function incrementar27913() {
  base.value++;
}
</script>
