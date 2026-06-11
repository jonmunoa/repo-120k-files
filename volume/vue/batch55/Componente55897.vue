<template>
  <section class="panel-55897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55897");
const base = ref(55897);
const total = computed(() => base.value * 2);

function incrementar55897() {
  base.value++;
}
</script>
