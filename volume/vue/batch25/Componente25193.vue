<template>
  <section class="panel-25193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25193");
const base = ref(25193);
const total = computed(() => base.value * 2);

function incrementar25193() {
  base.value++;
}
</script>
