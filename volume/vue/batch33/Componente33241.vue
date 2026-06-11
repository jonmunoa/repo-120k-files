<template>
  <section class="panel-33241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33241");
const base = ref(33241);
const total = computed(() => base.value * 2);

function incrementar33241() {
  base.value++;
}
</script>
