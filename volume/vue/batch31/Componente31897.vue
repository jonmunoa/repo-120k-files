<template>
  <section class="panel-31897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31897");
const base = ref(31897);
const total = computed(() => base.value * 2);

function incrementar31897() {
  base.value++;
}
</script>
