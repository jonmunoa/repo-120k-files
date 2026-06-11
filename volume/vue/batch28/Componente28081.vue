<template>
  <section class="panel-28081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28081");
const base = ref(28081);
const total = computed(() => base.value * 2);

function incrementar28081() {
  base.value++;
}
</script>
