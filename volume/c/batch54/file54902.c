// fichero 54902 -- macros y constantes
#define LIMITE_54902 55002
#define FACTOR_54902 3

int aplicar_limite54902(int valor) {
    if (valor > LIMITE_54902) return LIMITE_54902;
    return valor * FACTOR_54902;
}
