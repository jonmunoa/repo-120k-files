<template>
  <section class="panel-28425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28425");
const base = ref(28425);
const total = computed(() => base.value * 2);

function incrementar28425() {
  base.value++;
}
</script>
