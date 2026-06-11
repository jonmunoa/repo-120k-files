<template>
  <section class="panel-2877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2877");
const base = ref(2877);
const total = computed(() => base.value * 2);

function incrementar2877() {
  base.value++;
}
</script>
