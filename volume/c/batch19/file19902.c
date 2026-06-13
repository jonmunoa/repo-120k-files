// fichero 19902 -- macros y constantes
#define LIMITE_19902 20002
#define FACTOR_19902 3

int aplicar_limite19902(int valor) {
    if (valor > LIMITE_19902) return LIMITE_19902;
    return valor * FACTOR_19902;
}
