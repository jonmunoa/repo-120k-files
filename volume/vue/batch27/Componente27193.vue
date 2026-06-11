<template>
  <section class="panel-27193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27193");
const base = ref(27193);
const total = computed(() => base.value * 2);

function incrementar27193() {
  base.value++;
}
</script>
