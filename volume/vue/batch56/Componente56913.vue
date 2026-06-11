<template>
  <section class="panel-56913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56913");
const base = ref(56913);
const total = computed(() => base.value * 2);

function incrementar56913() {
  base.value++;
}
</script>
