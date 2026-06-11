<template>
  <section class="panel-50449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50449");
const base = ref(50449);
const total = computed(() => base.value * 2);

function incrementar50449() {
  base.value++;
}
</script>
