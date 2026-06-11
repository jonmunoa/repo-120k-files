<template>
  <section class="panel-7285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7285");
const base = ref(7285);
const total = computed(() => base.value * 2);

function incrementar7285() {
  base.value++;
}
</script>
