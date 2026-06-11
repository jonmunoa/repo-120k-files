<template>
  <section class="panel-10905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10905");
const base = ref(10905);
const total = computed(() => base.value * 2);

function incrementar10905() {
  base.value++;
}
</script>
