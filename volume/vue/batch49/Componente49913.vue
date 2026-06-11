<template>
  <section class="panel-49913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49913");
const base = ref(49913);
const total = computed(() => base.value * 2);

function incrementar49913() {
  base.value++;
}
</script>
