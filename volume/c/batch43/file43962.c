// fichero 43962 -- macros y constantes -- MODIFICADO
#define LIMITE_43962 44162
#define FACTOR_43962 4

int aplicar_limite43962(int valor) {
    if (valor > LIMITE_43962) return LIMITE_43962;
    return valor * FACTOR_43962;
}
