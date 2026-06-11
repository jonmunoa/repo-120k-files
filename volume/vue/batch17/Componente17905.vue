<template>
  <section class="panel-17905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17905");
const base = ref(17905);
const total = computed(() => base.value * 2);

function incrementar17905() {
  base.value++;
}
</script>
