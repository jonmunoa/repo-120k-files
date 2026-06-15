// fichero 30962 -- macros y constantes -- MODIFICADO
#define LIMITE_30962 31162
#define FACTOR_30962 4

int aplicar_limite30962(int valor) {
    if (valor > LIMITE_30962) return LIMITE_30962;
    return valor * FACTOR_30962;
}
