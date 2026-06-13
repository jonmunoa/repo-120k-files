// fichero 24902 -- macros y constantes
#define LIMITE_24902 25002
#define FACTOR_24902 3

int aplicar_limite24902(int valor) {
    if (valor > LIMITE_24902) return LIMITE_24902;
    return valor * FACTOR_24902;
}
