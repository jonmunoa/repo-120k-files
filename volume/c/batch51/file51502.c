// fichero 51502 -- macros y constantes
#define LIMITE_51502 51602
#define FACTOR_51502 3

int aplicar_limite51502(int valor) {
    if (valor > LIMITE_51502) return LIMITE_51502;
    return valor * FACTOR_51502;
}
