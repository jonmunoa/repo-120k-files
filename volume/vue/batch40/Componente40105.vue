<template>
  <section class="panel-40105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40105");
const base = ref(40105);
const total = computed(() => base.value * 2);

function incrementar40105() {
  base.value++;
}
</script>
