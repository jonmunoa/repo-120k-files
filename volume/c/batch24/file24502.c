// fichero 24502 -- macros y constantes
#define LIMITE_24502 24602
#define FACTOR_24502 3

int aplicar_limite24502(int valor) {
    if (valor > LIMITE_24502) return LIMITE_24502;
    return valor * FACTOR_24502;
}
