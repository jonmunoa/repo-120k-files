// fichero 37714 -- macros y constantes
#define LIMITE_37714 37814
#define FACTOR_37714 5

int aplicar_limite37714(int valor) {
    if (valor > LIMITE_37714) return LIMITE_37714;
    return valor * FACTOR_37714;
}
