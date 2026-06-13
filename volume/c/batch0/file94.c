// fichero 94 -- macros y constantes
#define LIMITE_94 194
#define FACTOR_94 5

int aplicar_limite94(int valor) {
    if (valor > LIMITE_94) return LIMITE_94;
    return valor * FACTOR_94;
}
