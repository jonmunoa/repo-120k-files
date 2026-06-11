<template>
  <section class="panel-39897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39897");
const base = ref(39897);
const total = computed(() => base.value * 2);

function incrementar39897() {
  base.value++;
}
</script>
