<template>
  <section class="panel-17641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17641");
const base = ref(17641);
const total = computed(() => base.value * 2);

function incrementar17641() {
  base.value++;
}
</script>
