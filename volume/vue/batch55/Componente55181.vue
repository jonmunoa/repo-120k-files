<template>
  <section class="panel-55181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55181");
const base = ref(55181);
const total = computed(() => base.value * 2);

function incrementar55181() {
  base.value++;
}
</script>
