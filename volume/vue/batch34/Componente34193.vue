<template>
  <section class="panel-34193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34193");
const base = ref(34193);
const total = computed(() => base.value * 2);

function incrementar34193() {
  base.value++;
}
</script>
