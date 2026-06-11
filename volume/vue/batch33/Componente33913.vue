<template>
  <section class="panel-33913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33913");
const base = ref(33913);
const total = computed(() => base.value * 2);

function incrementar33913() {
  base.value++;
}
</script>
