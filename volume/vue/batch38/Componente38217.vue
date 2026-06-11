<template>
  <section class="panel-38217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38217");
const base = ref(38217);
const total = computed(() => base.value * 2);

function incrementar38217() {
  base.value++;
}
</script>
