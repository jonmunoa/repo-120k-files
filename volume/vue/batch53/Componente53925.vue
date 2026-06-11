<template>
  <section class="panel-53925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53925");
const base = ref(53925);
const total = computed(() => base.value * 2);

function incrementar53925() {
  base.value++;
}
</script>
