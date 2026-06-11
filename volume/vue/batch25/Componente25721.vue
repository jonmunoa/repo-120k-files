<template>
  <section class="panel-25721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25721");
const base = ref(25721);
const total = computed(() => base.value * 2);

function incrementar25721() {
  base.value++;
}
</script>
