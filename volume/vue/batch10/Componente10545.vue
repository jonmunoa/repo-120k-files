<template>
  <section class="panel-10545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10545");
const base = ref(10545);
const total = computed(() => base.value * 2);

function incrementar10545() {
  base.value++;
}
</script>
