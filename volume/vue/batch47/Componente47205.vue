<template>
  <section class="panel-47205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47205");
const base = ref(47205);
const total = computed(() => base.value * 2);

function incrementar47205() {
  base.value++;
}
</script>
