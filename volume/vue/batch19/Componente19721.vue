<template>
  <section class="panel-19721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19721");
const base = ref(19721);
const total = computed(() => base.value * 2);

function incrementar19721() {
  base.value++;
}
</script>
