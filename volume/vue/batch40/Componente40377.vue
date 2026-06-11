<template>
  <section class="panel-40377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40377");
const base = ref(40377);
const total = computed(() => base.value * 2);

function incrementar40377() {
  base.value++;
}
</script>
