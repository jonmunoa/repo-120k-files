<template>
  <section class="panel-25797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25797");
const base = ref(25797);
const total = computed(() => base.value * 2);

function incrementar25797() {
  base.value++;
}
</script>
