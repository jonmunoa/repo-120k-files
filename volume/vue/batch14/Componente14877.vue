<template>
  <section class="panel-14877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14877");
const base = ref(14877);
const total = computed(() => base.value * 2);

function incrementar14877() {
  base.value++;
}
</script>
