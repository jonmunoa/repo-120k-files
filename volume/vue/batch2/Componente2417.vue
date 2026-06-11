<template>
  <section class="panel-2417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2417");
const base = ref(2417);
const total = computed(() => base.value * 2);

function incrementar2417() {
  base.value++;
}
</script>
