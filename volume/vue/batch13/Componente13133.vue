<template>
  <section class="panel-13133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13133");
const base = ref(13133);
const total = computed(() => base.value * 2);

function incrementar13133() {
  base.value++;
}
</script>
