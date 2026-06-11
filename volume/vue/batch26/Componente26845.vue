<template>
  <section class="panel-26845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26845");
const base = ref(26845);
const total = computed(() => base.value * 2);

function incrementar26845() {
  base.value++;
}
</script>
