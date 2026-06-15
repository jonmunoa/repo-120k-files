// fichero 34030 -- macros y constantes -- MODIFICADO
#define LIMITE_34030 34230
#define FACTOR_34030 2

int aplicar_limite34030(int valor) {
    if (valor > LIMITE_34030) return LIMITE_34030;
    return valor * FACTOR_34030;
}
