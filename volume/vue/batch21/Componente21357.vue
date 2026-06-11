<template>
  <section class="panel-21357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21357");
const base = ref(21357);
const total = computed(() => base.value * 2);

function incrementar21357() {
  base.value++;
}
</script>
