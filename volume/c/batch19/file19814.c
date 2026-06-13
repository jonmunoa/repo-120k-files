// fichero 19814 -- macros y constantes
#define LIMITE_19814 19914
#define FACTOR_19814 5

int aplicar_limite19814(int valor) {
    if (valor > LIMITE_19814) return LIMITE_19814;
    return valor * FACTOR_19814;
}
