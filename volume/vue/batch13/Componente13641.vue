<template>
  <section class="panel-13641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13641");
const base = ref(13641);
const total = computed(() => base.value * 2);

function incrementar13641() {
  base.value++;
}
</script>
