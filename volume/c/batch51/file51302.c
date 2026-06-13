// fichero 51302 -- macros y constantes
#define LIMITE_51302 51402
#define FACTOR_51302 3

int aplicar_limite51302(int valor) {
    if (valor > LIMITE_51302) return LIMITE_51302;
    return valor * FACTOR_51302;
}
