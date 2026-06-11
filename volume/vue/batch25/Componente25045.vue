<template>
  <section class="panel-25045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25045");
const base = ref(25045);
const total = computed(() => base.value * 2);

function incrementar25045() {
  base.value++;
}
</script>
