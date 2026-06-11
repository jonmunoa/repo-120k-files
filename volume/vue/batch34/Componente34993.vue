<template>
  <section class="panel-34993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34993");
const base = ref(34993);
const total = computed(() => base.value * 2);

function incrementar34993() {
  base.value++;
}
</script>
