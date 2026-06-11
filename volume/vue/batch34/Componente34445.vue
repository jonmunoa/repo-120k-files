<template>
  <section class="panel-34445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34445");
const base = ref(34445);
const total = computed(() => base.value * 2);

function incrementar34445() {
  base.value++;
}
</script>
