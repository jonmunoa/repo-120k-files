// fichero 24386 -- macros y constantes
#define LIMITE_24386 24486
#define FACTOR_24386 2

int aplicar_limite24386(int valor) {
    if (valor > LIMITE_24386) return LIMITE_24386;
    return valor * FACTOR_24386;
}
