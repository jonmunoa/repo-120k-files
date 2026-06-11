<template>
  <section class="panel-38357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38357");
const base = ref(38357);
const total = computed(() => base.value * 2);

function incrementar38357() {
  base.value++;
}
</script>
