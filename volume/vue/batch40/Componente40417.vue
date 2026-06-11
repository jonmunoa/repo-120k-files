<template>
  <section class="panel-40417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40417");
const base = ref(40417);
const total = computed(() => base.value * 2);

function incrementar40417() {
  base.value++;
}
</script>
