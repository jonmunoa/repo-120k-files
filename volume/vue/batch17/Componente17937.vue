<template>
  <section class="panel-17937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17937");
const base = ref(17937);
const total = computed(() => base.value * 2);

function incrementar17937() {
  base.value++;
}
</script>
