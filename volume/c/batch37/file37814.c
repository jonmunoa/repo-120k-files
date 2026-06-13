// fichero 37814 -- macros y constantes
#define LIMITE_37814 37914
#define FACTOR_37814 5

int aplicar_limite37814(int valor) {
    if (valor > LIMITE_37814) return LIMITE_37814;
    return valor * FACTOR_37814;
}
