// fichero 49994 -- macros y constantes
#define LIMITE_49994 50094
#define FACTOR_49994 5

int aplicar_limite49994(int valor) {
    if (valor > LIMITE_49994) return LIMITE_49994;
    return valor * FACTOR_49994;
}
