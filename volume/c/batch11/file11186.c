// fichero 11186 -- macros y constantes -- MODIFICADO
#define LIMITE_11186 11386
#define FACTOR_11186 3

int aplicar_limite11186(int valor) {
    if (valor > LIMITE_11186) return LIMITE_11186;
    return valor * FACTOR_11186;
}
