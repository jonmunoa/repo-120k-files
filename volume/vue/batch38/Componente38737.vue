<template>
  <section class="panel-38737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38737");
const base = ref(38737);
const total = computed(() => base.value * 2);

function incrementar38737() {
  base.value++;
}
</script>
