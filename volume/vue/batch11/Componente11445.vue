<template>
  <section class="panel-11445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11445");
const base = ref(11445);
const total = computed(() => base.value * 2);

function incrementar11445() {
  base.value++;
}
</script>
