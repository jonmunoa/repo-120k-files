<template>
  <section class="panel-21193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21193");
const base = ref(21193);
const total = computed(() => base.value * 2);

function incrementar21193() {
  base.value++;
}
</script>
