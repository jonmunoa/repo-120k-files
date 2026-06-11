<template>
  <section class="panel-41193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41193");
const base = ref(41193);
const total = computed(() => base.value * 2);

function incrementar41193() {
  base.value++;
}
</script>
