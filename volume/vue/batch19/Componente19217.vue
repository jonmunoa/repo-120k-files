<template>
  <section class="panel-19217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19217");
const base = ref(19217);
const total = computed(() => base.value * 2);

function incrementar19217() {
  base.value++;
}
</script>
