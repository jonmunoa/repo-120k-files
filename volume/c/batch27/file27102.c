// fichero 27102 -- macros y constantes -- MODIFICADO
#define LIMITE_27102 27302
#define FACTOR_27102 4

int aplicar_limite27102(int valor) {
    if (valor > LIMITE_27102) return LIMITE_27102;
    return valor * FACTOR_27102;
}
