<template>
  <section class="panel-18225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18225");
const base = ref(18225);
const total = computed(() => base.value * 2);

function incrementar18225() {
  base.value++;
}
</script>
