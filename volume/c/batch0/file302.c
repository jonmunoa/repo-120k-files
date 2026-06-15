// fichero 302 -- macros y constantes -- MODIFICADO
#define LIMITE_302 502
#define FACTOR_302 4

int aplicar_limite302(int valor) {
    if (valor > LIMITE_302) return LIMITE_302;
    return valor * FACTOR_302;
}
