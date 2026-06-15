// fichero 23078 -- macros y constantes -- MODIFICADO
#define LIMITE_23078 23278
#define FACTOR_23078 5

int aplicar_limite23078(int valor) {
    if (valor > LIMITE_23078) return LIMITE_23078;
    return valor * FACTOR_23078;
}
