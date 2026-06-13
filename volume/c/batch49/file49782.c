// fichero 49782 -- macros y constantes
#define LIMITE_49782 49882
#define FACTOR_49782 3

int aplicar_limite49782(int valor) {
    if (valor > LIMITE_49782) return LIMITE_49782;
    return valor * FACTOR_49782;
}
