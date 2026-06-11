<template>
  <section class="panel-14445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14445");
const base = ref(14445);
const total = computed(() => base.value * 2);

function incrementar14445() {
  base.value++;
}
</script>
