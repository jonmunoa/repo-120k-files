<template>
  <section class="panel-8373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8373");
const base = ref(8373);
const total = computed(() => base.value * 2);

function incrementar8373() {
  base.value++;
}
</script>
