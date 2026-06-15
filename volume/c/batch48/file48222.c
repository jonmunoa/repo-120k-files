// fichero 48222 -- macros y constantes -- MODIFICADO
#define LIMITE_48222 48422
#define FACTOR_48222 4

int aplicar_limite48222(int valor) {
    if (valor > LIMITE_48222) return LIMITE_48222;
    return valor * FACTOR_48222;
}
