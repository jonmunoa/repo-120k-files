<template>
  <section class="panel-10477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10477");
const base = ref(10477);
const total = computed(() => base.value * 2);

function incrementar10477() {
  base.value++;
}
</script>
