<template>
  <section class="panel-7785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7785");
const base = ref(7785);
const total = computed(() => base.value * 2);

function incrementar7785() {
  base.value++;
}
</script>
