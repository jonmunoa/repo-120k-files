<template>
  <section class="panel-38801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38801");
const base = ref(38801);
const total = computed(() => base.value * 2);

function incrementar38801() {
  base.value++;
}
</script>
