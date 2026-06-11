<template>
  <section class="panel-38109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38109");
const base = ref(38109);
const total = computed(() => base.value * 2);

function incrementar38109() {
  base.value++;
}
</script>
