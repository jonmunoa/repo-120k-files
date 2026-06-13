// fichero 502 -- macros y constantes
#define LIMITE_502 602
#define FACTOR_502 3

int aplicar_limite502(int valor) {
    if (valor > LIMITE_502) return LIMITE_502;
    return valor * FACTOR_502;
}
