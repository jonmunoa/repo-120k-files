// fichero 39558 -- macros y constantes
#define LIMITE_39558 39658
#define FACTOR_39558 4

int aplicar_limite39558(int valor) {
    if (valor > LIMITE_39558) return LIMITE_39558;
    return valor * FACTOR_39558;
}
