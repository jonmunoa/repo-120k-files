<template>
  <section class="panel-4561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4561");
const base = ref(4561);
const total = computed(() => base.value * 2);

function incrementar4561() {
  base.value++;
}
</script>
