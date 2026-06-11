<template>
  <section class="panel-17445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17445");
const base = ref(17445);
const total = computed(() => base.value * 2);

function incrementar17445() {
  base.value++;
}
</script>
