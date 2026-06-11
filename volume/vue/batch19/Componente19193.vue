<template>
  <section class="panel-19193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19193");
const base = ref(19193);
const total = computed(() => base.value * 2);

function incrementar19193() {
  base.value++;
}
</script>
