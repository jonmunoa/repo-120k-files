<template>
  <section class="panel-25161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25161");
const base = ref(25161);
const total = computed(() => base.value * 2);

function incrementar25161() {
  base.value++;
}
</script>
