<template>
  <section class="panel-55445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55445");
const base = ref(55445);
const total = computed(() => base.value * 2);

function incrementar55445() {
  base.value++;
}
</script>
