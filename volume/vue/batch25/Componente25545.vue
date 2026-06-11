<template>
  <section class="panel-25545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25545");
const base = ref(25545);
const total = computed(() => base.value * 2);

function incrementar25545() {
  base.value++;
}
</script>
