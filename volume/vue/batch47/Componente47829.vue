<template>
  <section class="panel-47829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47829");
const base = ref(47829);
const total = computed(() => base.value * 2);

function incrementar47829() {
  base.value++;
}
</script>
