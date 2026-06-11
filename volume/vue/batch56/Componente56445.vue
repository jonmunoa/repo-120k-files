<template>
  <section class="panel-56445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56445");
const base = ref(56445);
const total = computed(() => base.value * 2);

function incrementar56445() {
  base.value++;
}
</script>
