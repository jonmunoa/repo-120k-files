<template>
  <section class="panel-47877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47877");
const base = ref(47877);
const total = computed(() => base.value * 2);

function incrementar47877() {
  base.value++;
}
</script>
