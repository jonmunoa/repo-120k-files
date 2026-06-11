<template>
  <section class="panel-50905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50905");
const base = ref(50905);
const total = computed(() => base.value * 2);

function incrementar50905() {
  base.value++;
}
</script>
