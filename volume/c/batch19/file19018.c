// fichero 19018 -- macros y constantes -- MODIFICADO
#define LIMITE_19018 19218
#define FACTOR_19018 5

int aplicar_limite19018(int valor) {
    if (valor > LIMITE_19018) return LIMITE_19018;
    return valor * FACTOR_19018;
}
