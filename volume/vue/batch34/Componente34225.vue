<template>
  <section class="panel-34225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34225");
const base = ref(34225);
const total = computed(() => base.value * 2);

function incrementar34225() {
  base.value++;
}
</script>
