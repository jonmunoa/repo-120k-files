<template>
  <section class="panel-17105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17105");
const base = ref(17105);
const total = computed(() => base.value * 2);

function incrementar17105() {
  base.value++;
}
</script>
