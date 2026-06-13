// fichero 37902 -- macros y constantes
#define LIMITE_37902 38002
#define FACTOR_37902 3

int aplicar_limite37902(int valor) {
    if (valor > LIMITE_37902) return LIMITE_37902;
    return valor * FACTOR_37902;
}
