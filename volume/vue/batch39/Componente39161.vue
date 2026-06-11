<template>
  <section class="panel-39161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39161");
const base = ref(39161);
const total = computed(() => base.value * 2);

function incrementar39161() {
  base.value++;
}
</script>
