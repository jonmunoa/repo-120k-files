// fichero 24902 -- macros y constantes -- MODIFICADO
#define LIMITE_24902 25102
#define FACTOR_24902 4

int aplicar_limite24902(int valor) {
    if (valor > LIMITE_24902) return LIMITE_24902;
    return valor * FACTOR_24902;
}
