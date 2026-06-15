// fichero 8186 -- macros y constantes -- MODIFICADO
#define LIMITE_8186 8386
#define FACTOR_8186 3

int aplicar_limite8186(int valor) {
    if (valor > LIMITE_8186) return LIMITE_8186;
    return valor * FACTOR_8186;
}
