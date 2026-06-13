// fichero 51566 -- macros y constantes
#define LIMITE_51566 51666
#define FACTOR_51566 2

int aplicar_limite51566(int valor) {
    if (valor > LIMITE_51566) return LIMITE_51566;
    return valor * FACTOR_51566;
}
