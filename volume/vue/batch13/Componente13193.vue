<template>
  <section class="panel-13193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13193");
const base = ref(13193);
const total = computed(() => base.value * 2);

function incrementar13193() {
  base.value++;
}
</script>
