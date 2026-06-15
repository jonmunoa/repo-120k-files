// fichero 3010 -- macros y constantes -- MODIFICADO
#define LIMITE_3010 3210
#define FACTOR_3010 2

int aplicar_limite3010(int valor) {
    if (valor > LIMITE_3010) return LIMITE_3010;
    return valor * FACTOR_3010;
}
