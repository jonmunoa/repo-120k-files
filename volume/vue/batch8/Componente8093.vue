<template>
  <section class="panel-8093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8093");
const base = ref(8093);
const total = computed(() => base.value * 2);

function incrementar8093() {
  base.value++;
}
</script>
