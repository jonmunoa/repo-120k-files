<template>
  <section class="panel-18601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18601");
const base = ref(18601);
const total = computed(() => base.value * 2);

function incrementar18601() {
  base.value++;
}
</script>
