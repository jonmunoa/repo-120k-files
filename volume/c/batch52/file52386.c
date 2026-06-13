// fichero 52386 -- macros y constantes
#define LIMITE_52386 52486
#define FACTOR_52386 2

int aplicar_limite52386(int valor) {
    if (valor > LIMITE_52386) return LIMITE_52386;
    return valor * FACTOR_52386;
}
