<template>
  <section class="panel-27133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27133");
const base = ref(27133);
const total = computed(() => base.value * 2);

function incrementar27133() {
  base.value++;
}
</script>
