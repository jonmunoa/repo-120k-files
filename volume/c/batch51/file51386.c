// fichero 51386 -- macros y constantes
#define LIMITE_51386 51486
#define FACTOR_51386 2

int aplicar_limite51386(int valor) {
    if (valor > LIMITE_51386) return LIMITE_51386;
    return valor * FACTOR_51386;
}
