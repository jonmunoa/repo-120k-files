<template>
  <section class="panel-49925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49925");
const base = ref(49925);
const total = computed(() => base.value * 2);

function incrementar49925() {
  base.value++;
}
</script>
