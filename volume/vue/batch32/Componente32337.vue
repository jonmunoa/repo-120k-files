<template>
  <section class="panel-32337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32337");
const base = ref(32337);
const total = computed(() => base.value * 2);

function incrementar32337() {
  base.value++;
}
</script>
