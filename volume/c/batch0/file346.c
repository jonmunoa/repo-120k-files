// fichero 346 -- macros y constantes
#define LIMITE_346 446
#define FACTOR_346 2

int aplicar_limite346(int valor) {
    if (valor > LIMITE_346) return LIMITE_346;
    return valor * FACTOR_346;
}
