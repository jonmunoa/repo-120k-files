<template>
  <section class="panel-35857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35857");
const base = ref(35857);
const total = computed(() => base.value * 2);

function incrementar35857() {
  base.value++;
}
</script>
