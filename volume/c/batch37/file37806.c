// fichero 37806 -- macros y constantes -- MODIFICADO
#define LIMITE_37806 38006
#define FACTOR_37806 3

int aplicar_limite37806(int valor) {
    if (valor > LIMITE_37806) return LIMITE_37806;
    return valor * FACTOR_37806;
}
