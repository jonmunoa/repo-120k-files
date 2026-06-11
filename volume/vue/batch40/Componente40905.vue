<template>
  <section class="panel-40905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40905");
const base = ref(40905);
const total = computed(() => base.value * 2);

function incrementar40905() {
  base.value++;
}
</script>
