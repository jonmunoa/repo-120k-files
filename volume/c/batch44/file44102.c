// fichero 44102 -- macros y constantes -- MODIFICADO
#define LIMITE_44102 44302
#define FACTOR_44102 4

int aplicar_limite44102(int valor) {
    if (valor > LIMITE_44102) return LIMITE_44102;
    return valor * FACTOR_44102;
}
