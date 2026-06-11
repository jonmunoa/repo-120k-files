<template>
  <section class="panel-38101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38101");
const base = ref(38101);
const total = computed(() => base.value * 2);

function incrementar38101() {
  base.value++;
}
</script>
