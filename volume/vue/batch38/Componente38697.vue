<template>
  <section class="panel-38697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38697");
const base = ref(38697);
const total = computed(() => base.value * 2);

function incrementar38697() {
  base.value++;
}
</script>
