<template>
  <section class="panel-12913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12913");
const base = ref(12913);
const total = computed(() => base.value * 2);

function incrementar12913() {
  base.value++;
}
</script>
