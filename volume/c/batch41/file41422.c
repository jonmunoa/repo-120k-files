// fichero 41422 -- macros y constantes
#define LIMITE_41422 41522
#define FACTOR_41422 3

int aplicar_limite41422(int valor) {
    if (valor > LIMITE_41422) return LIMITE_41422;
    return valor * FACTOR_41422;
}
