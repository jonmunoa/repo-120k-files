// fichero 34782 -- macros y constantes -- MODIFICADO
#define LIMITE_34782 34982
#define FACTOR_34782 4

int aplicar_limite34782(int valor) {
    if (valor > LIMITE_34782) return LIMITE_34782;
    return valor * FACTOR_34782;
}
