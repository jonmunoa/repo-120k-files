<template>
  <section class="panel-38945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38945");
const base = ref(38945);
const total = computed(() => base.value * 2);

function incrementar38945() {
  base.value++;
}
</script>
