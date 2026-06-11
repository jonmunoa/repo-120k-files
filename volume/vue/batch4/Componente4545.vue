<template>
  <section class="panel-4545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4545");
const base = ref(4545);
const total = computed(() => base.value * 2);

function incrementar4545() {
  base.value++;
}
</script>
