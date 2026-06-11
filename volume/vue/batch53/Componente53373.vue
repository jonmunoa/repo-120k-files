<template>
  <section class="panel-53373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53373");
const base = ref(53373);
const total = computed(() => base.value * 2);

function incrementar53373() {
  base.value++;
}
</script>
