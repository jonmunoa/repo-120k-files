<template>
  <section class="panel-17225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17225");
const base = ref(17225);
const total = computed(() => base.value * 2);

function incrementar17225() {
  base.value++;
}
</script>
