// fichero 35782 -- macros y constantes
#define LIMITE_35782 35882
#define FACTOR_35782 3

int aplicar_limite35782(int valor) {
    if (valor > LIMITE_35782) return LIMITE_35782;
    return valor * FACTOR_35782;
}
