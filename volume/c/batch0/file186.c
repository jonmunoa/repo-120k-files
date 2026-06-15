// fichero 186 -- macros y constantes -- MODIFICADO
#define LIMITE_186 386
#define FACTOR_186 3

int aplicar_limite186(int valor) {
    if (valor > LIMITE_186) return LIMITE_186;
    return valor * FACTOR_186;
}
