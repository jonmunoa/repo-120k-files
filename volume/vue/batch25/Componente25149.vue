<template>
  <section class="panel-25149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25149");
const base = ref(25149);
const total = computed(() => base.value * 2);

function incrementar25149() {
  base.value++;
}
</script>
