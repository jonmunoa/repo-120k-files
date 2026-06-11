<template>
  <section class="panel-27641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27641");
const base = ref(27641);
const total = computed(() => base.value * 2);

function incrementar27641() {
  base.value++;
}
</script>
