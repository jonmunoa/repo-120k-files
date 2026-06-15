// fichero 19766 -- macros y constantes -- MODIFICADO
#define LIMITE_19766 19966
#define FACTOR_19766 3

int aplicar_limite19766(int valor) {
    if (valor > LIMITE_19766) return LIMITE_19766;
    return valor * FACTOR_19766;
}
