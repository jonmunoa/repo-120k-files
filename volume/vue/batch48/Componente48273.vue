<template>
  <section class="panel-48273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48273");
const base = ref(48273);
const total = computed(() => base.value * 2);

function incrementar48273() {
  base.value++;
}
</script>
