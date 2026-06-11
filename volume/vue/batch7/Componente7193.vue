<template>
  <section class="panel-7193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7193");
const base = ref(7193);
const total = computed(() => base.value * 2);

function incrementar7193() {
  base.value++;
}
</script>
