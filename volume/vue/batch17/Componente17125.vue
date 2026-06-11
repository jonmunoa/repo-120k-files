<template>
  <section class="panel-17125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17125");
const base = ref(17125);
const total = computed(() => base.value * 2);

function incrementar17125() {
  base.value++;
}
</script>
