// fichero 48302 -- macros y constantes -- MODIFICADO
#define LIMITE_48302 48502
#define FACTOR_48302 4

int aplicar_limite48302(int valor) {
    if (valor > LIMITE_48302) return LIMITE_48302;
    return valor * FACTOR_48302;
}
