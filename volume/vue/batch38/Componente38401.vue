<template>
  <section class="panel-38401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38401");
const base = ref(38401);
const total = computed(() => base.value * 2);

function incrementar38401() {
  base.value++;
}
</script>
