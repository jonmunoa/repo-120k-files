// fichero 502 -- macros y constantes -- MODIFICADO
#define LIMITE_502 702
#define FACTOR_502 4

int aplicar_limite502(int valor) {
    if (valor > LIMITE_502) return LIMITE_502;
    return valor * FACTOR_502;
}
