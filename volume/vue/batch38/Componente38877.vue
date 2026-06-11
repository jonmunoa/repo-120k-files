<template>
  <section class="panel-38877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38877");
const base = ref(38877);
const total = computed(() => base.value * 2);

function incrementar38877() {
  base.value++;
}
</script>
