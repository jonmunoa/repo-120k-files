<template>
  <section class="panel-19913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19913");
const base = ref(19913);
const total = computed(() => base.value * 2);

function incrementar19913() {
  base.value++;
}
</script>
