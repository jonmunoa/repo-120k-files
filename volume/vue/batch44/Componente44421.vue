<template>
  <section class="panel-44421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44421");
const base = ref(44421);
const total = computed(() => base.value * 2);

function incrementar44421() {
  base.value++;
}
</script>
