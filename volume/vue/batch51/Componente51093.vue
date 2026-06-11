<template>
  <section class="panel-51093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51093");
const base = ref(51093);
const total = computed(() => base.value * 2);

function incrementar51093() {
  base.value++;
}
</script>
