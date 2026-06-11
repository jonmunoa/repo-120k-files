<template>
  <section class="panel-28925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28925");
const base = ref(28925);
const total = computed(() => base.value * 2);

function incrementar28925() {
  base.value++;
}
</script>
