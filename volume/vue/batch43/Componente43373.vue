<template>
  <section class="panel-43373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43373");
const base = ref(43373);
const total = computed(() => base.value * 2);

function incrementar43373() {
  base.value++;
}
</script>
