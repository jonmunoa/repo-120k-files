// fichero 41058 -- macros y constantes -- MODIFICADO
#define LIMITE_41058 41258
#define FACTOR_41058 5

int aplicar_limite41058(int valor) {
    if (valor > LIMITE_41058) return LIMITE_41058;
    return valor * FACTOR_41058;
}
