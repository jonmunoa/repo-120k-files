// fichero 51902 -- macros y constantes
#define LIMITE_51902 52002
#define FACTOR_51902 3

int aplicar_limite51902(int valor) {
    if (valor > LIMITE_51902) return LIMITE_51902;
    return valor * FACTOR_51902;
}
