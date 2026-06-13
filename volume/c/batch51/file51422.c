// fichero 51422 -- macros y constantes
#define LIMITE_51422 51522
#define FACTOR_51422 3

int aplicar_limite51422(int valor) {
    if (valor > LIMITE_51422) return LIMITE_51422;
    return valor * FACTOR_51422;
}
