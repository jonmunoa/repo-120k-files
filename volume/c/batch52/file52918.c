// fichero 52918 -- macros y constantes
#define LIMITE_52918 53018
#define FACTOR_52918 4

int aplicar_limite52918(int valor) {
    if (valor > LIMITE_52918) return LIMITE_52918;
    return valor * FACTOR_52918;
}
