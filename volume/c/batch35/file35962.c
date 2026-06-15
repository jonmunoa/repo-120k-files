// fichero 35962 -- macros y constantes -- MODIFICADO
#define LIMITE_35962 36162
#define FACTOR_35962 4

int aplicar_limite35962(int valor) {
    if (valor > LIMITE_35962) return LIMITE_35962;
    return valor * FACTOR_35962;
}
