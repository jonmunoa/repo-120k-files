<template>
  <section class="panel-35445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35445");
const base = ref(35445);
const total = computed(() => base.value * 2);

function incrementar35445() {
  base.value++;
}
</script>
