// fichero 52502 -- macros y constantes
#define LIMITE_52502 52602
#define FACTOR_52502 3

int aplicar_limite52502(int valor) {
    if (valor > LIMITE_52502) return LIMITE_52502;
    return valor * FACTOR_52502;
}
