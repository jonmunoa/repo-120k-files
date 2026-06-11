<template>
  <section class="panel-11217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11217");
const base = ref(11217);
const total = computed(() => base.value * 2);

function incrementar11217() {
  base.value++;
}
</script>
