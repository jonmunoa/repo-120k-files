// fichero 6154 -- macros y constantes -- MODIFICADO
#define LIMITE_6154 6354
#define FACTOR_6154 6

int aplicar_limite6154(int valor) {
    if (valor > LIMITE_6154) return LIMITE_6154;
    return valor * FACTOR_6154;
}
