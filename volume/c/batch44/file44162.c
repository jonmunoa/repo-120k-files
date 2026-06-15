// fichero 44162 -- macros y constantes -- MODIFICADO
#define LIMITE_44162 44362
#define FACTOR_44162 4

int aplicar_limite44162(int valor) {
    if (valor > LIMITE_44162) return LIMITE_44162;
    return valor * FACTOR_44162;
}
