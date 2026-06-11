<template>
  <section class="panel-53577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53577");
const base = ref(53577);
const total = computed(() => base.value * 2);

function incrementar53577() {
  base.value++;
}
</script>
