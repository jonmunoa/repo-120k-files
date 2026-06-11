<template>
  <section class="panel-34521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34521");
const base = ref(34521);
const total = computed(() => base.value * 2);

function incrementar34521() {
  base.value++;
}
</script>
