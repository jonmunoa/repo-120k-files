// fichero 32154 -- macros y constantes -- MODIFICADO
#define LIMITE_32154 32354
#define FACTOR_32154 6

int aplicar_limite32154(int valor) {
    if (valor > LIMITE_32154) return LIMITE_32154;
    return valor * FACTOR_32154;
}
