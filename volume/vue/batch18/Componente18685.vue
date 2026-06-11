<template>
  <section class="panel-18685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18685");
const base = ref(18685);
const total = computed(() => base.value * 2);

function incrementar18685() {
  base.value++;
}
</script>
