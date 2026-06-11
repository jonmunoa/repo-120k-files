<template>
  <section class="panel-33445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33445");
const base = ref(33445);
const total = computed(() => base.value * 2);

function incrementar33445() {
  base.value++;
}
</script>
