<template>
  <section class="panel-51905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51905");
const base = ref(51905);
const total = computed(() => base.value * 2);

function incrementar51905() {
  base.value++;
}
</script>
