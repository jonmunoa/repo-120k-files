<template>
  <section class="panel-45445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45445");
const base = ref(45445);
const total = computed(() => base.value * 2);

function incrementar45445() {
  base.value++;
}
</script>
