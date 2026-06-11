<template>
  <section class="panel-19877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19877");
const base = ref(19877);
const total = computed(() => base.value * 2);

function incrementar19877() {
  base.value++;
}
</script>
