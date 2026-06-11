<template>
  <section class="panel-25285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25285");
const base = ref(25285);
const total = computed(() => base.value * 2);

function incrementar25285() {
  base.value++;
}
</script>
