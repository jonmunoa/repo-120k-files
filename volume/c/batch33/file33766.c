// fichero 33766 -- macros y constantes -- MODIFICADO
#define LIMITE_33766 33966
#define FACTOR_33766 3

int aplicar_limite33766(int valor) {
    if (valor > LIMITE_33766) return LIMITE_33766;
    return valor * FACTOR_33766;
}
