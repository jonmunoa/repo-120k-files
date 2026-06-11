<template>
  <section class="panel-25137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25137");
const base = ref(25137);
const total = computed(() => base.value * 2);

function incrementar25137() {
  base.value++;
}
</script>
