<template>
  <section class="panel-7477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7477");
const base = ref(7477);
const total = computed(() => base.value * 2);

function incrementar7477() {
  base.value++;
}
</script>
