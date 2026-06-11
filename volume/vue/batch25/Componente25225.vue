<template>
  <section class="panel-25225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25225");
const base = ref(25225);
const total = computed(() => base.value * 2);

function incrementar25225() {
  base.value++;
}
</script>
