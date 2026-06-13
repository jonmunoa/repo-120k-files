// fichero 17558 -- macros y constantes
#define LIMITE_17558 17658
#define FACTOR_17558 4

int aplicar_limite17558(int valor) {
    if (valor > LIMITE_17558) return LIMITE_17558;
    return valor * FACTOR_17558;
}
