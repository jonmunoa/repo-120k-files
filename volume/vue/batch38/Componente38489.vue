<template>
  <section class="panel-38489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38489");
const base = ref(38489);
const total = computed(() => base.value * 2);

function incrementar38489() {
  base.value++;
}
</script>
