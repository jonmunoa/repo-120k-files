<template>
  <section class="panel-11641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11641");
const base = ref(11641);
const total = computed(() => base.value * 2);

function incrementar11641() {
  base.value++;
}
</script>
