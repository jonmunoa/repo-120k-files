<template>
  <section class="panel-38905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38905");
const base = ref(38905);
const total = computed(() => base.value * 2);

function incrementar38905() {
  base.value++;
}
</script>
