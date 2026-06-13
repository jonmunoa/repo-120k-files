// fichero 16422 -- macros y constantes
#define LIMITE_16422 16522
#define FACTOR_16422 3

int aplicar_limite16422(int valor) {
    if (valor > LIMITE_16422) return LIMITE_16422;
    return valor * FACTOR_16422;
}
