// fichero 51918 -- macros y constantes
#define LIMITE_51918 52018
#define FACTOR_51918 4

int aplicar_limite51918(int valor) {
    if (valor > LIMITE_51918) return LIMITE_51918;
    return valor * FACTOR_51918;
}
