// fichero 25350 -- macros y constantes
#define LIMITE_25350 25450
#define FACTOR_25350 1

int aplicar_limite25350(int valor) {
    if (valor > LIMITE_25350) return LIMITE_25350;
    return valor * FACTOR_25350;
}
