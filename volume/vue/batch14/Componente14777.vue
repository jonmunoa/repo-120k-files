<template>
  <section class="panel-14777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14777");
const base = ref(14777);
const total = computed(() => base.value * 2);

function incrementar14777() {
  base.value++;
}
</script>
