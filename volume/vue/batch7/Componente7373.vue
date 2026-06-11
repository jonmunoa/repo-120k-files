<template>
  <section class="panel-7373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7373");
const base = ref(7373);
const total = computed(() => base.value * 2);

function incrementar7373() {
  base.value++;
}
</script>
