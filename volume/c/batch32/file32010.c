// fichero 32010 -- macros y constantes -- MODIFICADO
#define LIMITE_32010 32210
#define FACTOR_32010 2

int aplicar_limite32010(int valor) {
    if (valor > LIMITE_32010) return LIMITE_32010;
    return valor * FACTOR_32010;
}
