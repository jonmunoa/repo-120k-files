// fichero 34230 -- macros y constantes -- MODIFICADO
#define LIMITE_34230 34430
#define FACTOR_34230 2

int aplicar_limite34230(int valor) {
    if (valor > LIMITE_34230) return LIMITE_34230;
    return valor * FACTOR_34230;
}
