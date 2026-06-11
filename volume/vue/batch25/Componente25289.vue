<template>
  <section class="panel-25289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25289");
const base = ref(25289);
const total = computed(() => base.value * 2);

function incrementar25289() {
  base.value++;
}
</script>
