<template>
  <section class="panel-55837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55837");
const base = ref(55837);
const total = computed(() => base.value * 2);

function incrementar55837() {
  base.value++;
}
</script>
