<template>
  <section class="panel-2193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2193");
const base = ref(2193);
const total = computed(() => base.value * 2);

function incrementar2193() {
  base.value++;
}
</script>
