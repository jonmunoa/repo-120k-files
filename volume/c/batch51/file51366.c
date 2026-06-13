// fichero 51366 -- macros y constantes
#define LIMITE_51366 51466
#define FACTOR_51366 2

int aplicar_limite51366(int valor) {
    if (valor > LIMITE_51366) return LIMITE_51366;
    return valor * FACTOR_51366;
}
