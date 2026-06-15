// fichero 44782 -- macros y constantes -- MODIFICADO
#define LIMITE_44782 44982
#define FACTOR_44782 4

int aplicar_limite44782(int valor) {
    if (valor > LIMITE_44782) return LIMITE_44782;
    return valor * FACTOR_44782;
}
