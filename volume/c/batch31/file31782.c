// fichero 31782 -- macros y constantes -- MODIFICADO
#define LIMITE_31782 31982
#define FACTOR_31782 4

int aplicar_limite31782(int valor) {
    if (valor > LIMITE_31782) return LIMITE_31782;
    return valor * FACTOR_31782;
}
