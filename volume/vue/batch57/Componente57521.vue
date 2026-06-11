<template>
  <section class="panel-57521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57521");
const base = ref(57521);
const total = computed(() => base.value * 2);

function incrementar57521() {
  base.value++;
}
</script>
