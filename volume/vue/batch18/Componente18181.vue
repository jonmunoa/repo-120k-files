<template>
  <section class="panel-18181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18181");
const base = ref(18181);
const total = computed(() => base.value * 2);

function incrementar18181() {
  base.value++;
}
</script>
