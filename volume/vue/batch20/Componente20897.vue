<template>
  <section class="panel-20897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20897");
const base = ref(20897);
const total = computed(() => base.value * 2);

function incrementar20897() {
  base.value++;
}
</script>
