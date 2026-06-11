<template>
  <section class="panel-8697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8697");
const base = ref(8697);
const total = computed(() => base.value * 2);

function incrementar8697() {
  base.value++;
}
</script>
