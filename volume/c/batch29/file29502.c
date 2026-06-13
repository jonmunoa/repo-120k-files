// fichero 29502 -- macros y constantes
#define LIMITE_29502 29602
#define FACTOR_29502 3

int aplicar_limite29502(int valor) {
    if (valor > LIMITE_29502) return LIMITE_29502;
    return valor * FACTOR_29502;
}
