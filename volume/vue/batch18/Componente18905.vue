<template>
  <section class="panel-18905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18905");
const base = ref(18905);
const total = computed(() => base.value * 2);

function incrementar18905() {
  base.value++;
}
</script>
