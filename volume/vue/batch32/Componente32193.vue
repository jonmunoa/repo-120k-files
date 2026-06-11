<template>
  <section class="panel-32193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32193");
const base = ref(32193);
const total = computed(() => base.value * 2);

function incrementar32193() {
  base.value++;
}
</script>
