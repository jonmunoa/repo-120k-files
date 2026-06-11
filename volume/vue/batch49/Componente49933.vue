<template>
  <section class="panel-49933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49933");
const base = ref(49933);
const total = computed(() => base.value * 2);

function incrementar49933() {
  base.value++;
}
</script>
