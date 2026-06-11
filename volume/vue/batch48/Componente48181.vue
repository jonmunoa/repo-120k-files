<template>
  <section class="panel-48181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48181");
const base = ref(48181);
const total = computed(() => base.value * 2);

function incrementar48181() {
  base.value++;
}
</script>
