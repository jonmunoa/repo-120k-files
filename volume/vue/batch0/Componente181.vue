<template>
  <section class="panel-181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 181");
const base = ref(181);
const total = computed(() => base.value * 2);

function incrementar181() {
  base.value++;
}
</script>
