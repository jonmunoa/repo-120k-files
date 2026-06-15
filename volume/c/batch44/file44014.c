// fichero 44014 -- macros y constantes -- MODIFICADO
#define LIMITE_44014 44214
#define FACTOR_44014 6

int aplicar_limite44014(int valor) {
    if (valor > LIMITE_44014) return LIMITE_44014;
    return valor * FACTOR_44014;
}
