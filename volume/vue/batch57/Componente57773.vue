<template>
  <section class="panel-57773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57773");
const base = ref(57773);
const total = computed(() => base.value * 2);

function incrementar57773() {
  base.value++;
}
</script>
