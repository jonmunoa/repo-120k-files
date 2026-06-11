<template>
  <section class="panel-40857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40857");
const base = ref(40857);
const total = computed(() => base.value * 2);

function incrementar40857() {
  base.value++;
}
</script>
