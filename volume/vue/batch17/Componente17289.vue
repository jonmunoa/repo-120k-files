<template>
  <section class="panel-17289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17289");
const base = ref(17289);
const total = computed(() => base.value * 2);

function incrementar17289() {
  base.value++;
}
</script>
