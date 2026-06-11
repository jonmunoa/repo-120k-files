<template>
  <section class="panel-56685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56685");
const base = ref(56685);
const total = computed(() => base.value * 2);

function incrementar56685() {
  base.value++;
}
</script>
