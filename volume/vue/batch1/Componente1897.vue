<template>
  <section class="panel-1897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1897");
const base = ref(1897);
const total = computed(() => base.value * 2);

function incrementar1897() {
  base.value++;
}
</script>
