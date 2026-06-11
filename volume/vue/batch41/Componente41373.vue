<template>
  <section class="panel-41373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41373");
const base = ref(41373);
const total = computed(() => base.value * 2);

function incrementar41373() {
  base.value++;
}
</script>
