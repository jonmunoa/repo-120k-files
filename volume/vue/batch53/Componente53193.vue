<template>
  <section class="panel-53193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53193");
const base = ref(53193);
const total = computed(() => base.value * 2);

function incrementar53193() {
  base.value++;
}
</script>
