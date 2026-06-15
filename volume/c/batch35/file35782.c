// fichero 35782 -- macros y constantes -- MODIFICADO
#define LIMITE_35782 35982
#define FACTOR_35782 4

int aplicar_limite35782(int valor) {
    if (valor > LIMITE_35782) return LIMITE_35782;
    return valor * FACTOR_35782;
}
