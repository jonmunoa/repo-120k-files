// fichero 51842 -- macros y constantes
#define LIMITE_51842 51942
#define FACTOR_51842 3

int aplicar_limite51842(int valor) {
    if (valor > LIMITE_51842) return LIMITE_51842;
    return valor * FACTOR_51842;
}
