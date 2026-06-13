// fichero 8210 -- macros y constantes
#define LIMITE_8210 8310
#define FACTOR_8210 1

int aplicar_limite8210(int valor) {
    if (valor > LIMITE_8210) return LIMITE_8210;
    return valor * FACTOR_8210;
}
