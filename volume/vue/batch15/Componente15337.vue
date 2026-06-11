<template>
  <section class="panel-15337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15337");
const base = ref(15337);
const total = computed(() => base.value * 2);

function incrementar15337() {
  base.value++;
}
</script>
