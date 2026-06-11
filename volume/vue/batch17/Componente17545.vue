<template>
  <section class="panel-17545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17545");
const base = ref(17545);
const total = computed(() => base.value * 2);

function incrementar17545() {
  base.value++;
}
</script>
