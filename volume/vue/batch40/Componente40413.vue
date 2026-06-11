<template>
  <section class="panel-40413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40413");
const base = ref(40413);
const total = computed(() => base.value * 2);

function incrementar40413() {
  base.value++;
}
</script>
