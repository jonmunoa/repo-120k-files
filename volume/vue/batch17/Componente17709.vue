<template>
  <section class="panel-17709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17709");
const base = ref(17709);
const total = computed(() => base.value * 2);

function incrementar17709() {
  base.value++;
}
</script>
