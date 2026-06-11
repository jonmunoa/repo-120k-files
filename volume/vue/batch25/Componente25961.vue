<template>
  <section class="panel-25961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25961");
const base = ref(25961);
const total = computed(() => base.value * 2);

function incrementar25961() {
  base.value++;
}
</script>
