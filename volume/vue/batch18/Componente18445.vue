<template>
  <section class="panel-18445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18445");
const base = ref(18445);
const total = computed(() => base.value * 2);

function incrementar18445() {
  base.value++;
}
</script>
