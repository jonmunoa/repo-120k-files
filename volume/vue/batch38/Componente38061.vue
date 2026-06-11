<template>
  <section class="panel-38061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38061");
const base = ref(38061);
const total = computed(() => base.value * 2);

function incrementar38061() {
  base.value++;
}
</script>
