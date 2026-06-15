// fichero 15186 -- macros y constantes -- MODIFICADO
#define LIMITE_15186 15386
#define FACTOR_15186 3

int aplicar_limite15186(int valor) {
    if (valor > LIMITE_15186) return LIMITE_15186;
    return valor * FACTOR_15186;
}
