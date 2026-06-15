// fichero 24782 -- macros y constantes -- MODIFICADO
#define LIMITE_24782 24982
#define FACTOR_24782 4

int aplicar_limite24782(int valor) {
    if (valor > LIMITE_24782) return LIMITE_24782;
    return valor * FACTOR_24782;
}
