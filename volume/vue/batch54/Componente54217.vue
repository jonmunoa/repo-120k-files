<template>
  <section class="panel-54217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54217");
const base = ref(54217);
const total = computed(() => base.value * 2);

function incrementar54217() {
  base.value++;
}
</script>
