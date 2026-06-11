<template>
  <section class="panel-11077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11077");
const base = ref(11077);
const total = computed(() => base.value * 2);

function incrementar11077() {
  base.value++;
}
</script>
