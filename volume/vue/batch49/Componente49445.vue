<template>
  <section class="panel-49445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49445");
const base = ref(49445);
const total = computed(() => base.value * 2);

function incrementar49445() {
  base.value++;
}
</script>
