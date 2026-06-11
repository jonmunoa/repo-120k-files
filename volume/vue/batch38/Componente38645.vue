<template>
  <section class="panel-38645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38645");
const base = ref(38645);
const total = computed(() => base.value * 2);

function incrementar38645() {
  base.value++;
}
</script>
