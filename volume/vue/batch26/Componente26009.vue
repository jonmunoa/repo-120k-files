<template>
  <section class="panel-26009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26009");
const base = ref(26009);
const total = computed(() => base.value * 2);

function incrementar26009() {
  base.value++;
}
</script>
