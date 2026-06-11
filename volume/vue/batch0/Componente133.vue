<template>
  <section class="panel-133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 133");
const base = ref(133);
const total = computed(() => base.value * 2);

function incrementar133() {
  base.value++;
}
</script>
