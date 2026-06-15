// fichero 44706 -- macros y constantes -- MODIFICADO
#define LIMITE_44706 44906
#define FACTOR_44706 3

int aplicar_limite44706(int valor) {
    if (valor > LIMITE_44706) return LIMITE_44706;
    return valor * FACTOR_44706;
}
