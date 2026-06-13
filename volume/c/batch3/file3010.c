// fichero 3010 -- macros y constantes
#define LIMITE_3010 3110
#define FACTOR_3010 1

int aplicar_limite3010(int valor) {
    if (valor > LIMITE_3010) return LIMITE_3010;
    return valor * FACTOR_3010;
}
