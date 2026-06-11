<template>
  <section class="panel-25417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25417");
const base = ref(25417);
const total = computed(() => base.value * 2);

function incrementar25417() {
  base.value++;
}
</script>
