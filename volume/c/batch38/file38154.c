// fichero 38154 -- macros y constantes -- MODIFICADO
#define LIMITE_38154 38354
#define FACTOR_38154 6

int aplicar_limite38154(int valor) {
    if (valor > LIMITE_38154) return LIMITE_38154;
    return valor * FACTOR_38154;
}
