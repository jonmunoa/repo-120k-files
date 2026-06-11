<template>
  <section class="panel-25325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25325");
const base = ref(25325);
const total = computed(() => base.value * 2);

function incrementar25325() {
  base.value++;
}
</script>
