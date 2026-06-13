// fichero 37806 -- macros y constantes
#define LIMITE_37806 37906
#define FACTOR_37806 2

int aplicar_limite37806(int valor) {
    if (valor > LIMITE_37806) return LIMITE_37806;
    return valor * FACTOR_37806;
}
