// fichero 27294 -- macros y constantes
#define LIMITE_27294 27394
#define FACTOR_27294 5

int aplicar_limite27294(int valor) {
    if (valor > LIMITE_27294) return LIMITE_27294;
    return valor * FACTOR_27294;
}
