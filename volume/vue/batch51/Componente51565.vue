<template>
  <section class="panel-51565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51565");
const base = ref(51565);
const total = computed(() => base.value * 2);

function incrementar51565() {
  base.value++;
}
</script>
