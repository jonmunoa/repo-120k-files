<template>
  <section class="panel-56449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56449");
const base = ref(56449);
const total = computed(() => base.value * 2);

function incrementar56449() {
  base.value++;
}
</script>
