<template>
  <section class="panel-19181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19181");
const base = ref(19181);
const total = computed(() => base.value * 2);

function incrementar19181() {
  base.value++;
}
</script>
