<template>
  <section class="panel-18401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18401");
const base = ref(18401);
const total = computed(() => base.value * 2);

function incrementar18401() {
  base.value++;
}
</script>
