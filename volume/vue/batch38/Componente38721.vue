<template>
  <section class="panel-38721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38721");
const base = ref(38721);
const total = computed(() => base.value * 2);

function incrementar38721() {
  base.value++;
}
</script>
