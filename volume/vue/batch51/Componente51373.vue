<template>
  <section class="panel-51373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51373");
const base = ref(51373);
const total = computed(() => base.value * 2);

function incrementar51373() {
  base.value++;
}
</script>
