<template>
  <section class="panel-53477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53477");
const base = ref(53477);
const total = computed(() => base.value * 2);

function incrementar53477() {
  base.value++;
}
</script>
