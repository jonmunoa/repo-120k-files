<template>
  <section class="panel-33181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33181");
const base = ref(33181);
const total = computed(() => base.value * 2);

function incrementar33181() {
  base.value++;
}
</script>
