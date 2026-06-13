// fichero 51478 -- macros y constantes
#define LIMITE_51478 51578
#define FACTOR_51478 4

int aplicar_limite51478(int valor) {
    if (valor > LIMITE_51478) return LIMITE_51478;
    return valor * FACTOR_51478;
}
