<template>
  <section class="panel-25437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25437");
const base = ref(25437);
const total = computed(() => base.value * 2);

function incrementar25437() {
  base.value++;
}
</script>
