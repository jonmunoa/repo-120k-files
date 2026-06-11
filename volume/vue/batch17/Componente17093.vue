<template>
  <section class="panel-17093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17093");
const base = ref(17093);
const total = computed(() => base.value * 2);

function incrementar17093() {
  base.value++;
}
</script>
