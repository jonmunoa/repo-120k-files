<template>
  <section class="panel-31913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31913");
const base = ref(31913);
const total = computed(() => base.value * 2);

function incrementar31913() {
  base.value++;
}
</script>
