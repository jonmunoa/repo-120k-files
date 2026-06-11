<template>
  <section class="panel-25657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25657");
const base = ref(25657);
const total = computed(() => base.value * 2);

function incrementar25657() {
  base.value++;
}
</script>
