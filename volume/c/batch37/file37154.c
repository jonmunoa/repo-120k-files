// fichero 37154 -- macros y constantes -- MODIFICADO
#define LIMITE_37154 37354
#define FACTOR_37154 6

int aplicar_limite37154(int valor) {
    if (valor > LIMITE_37154) return LIMITE_37154;
    return valor * FACTOR_37154;
}
