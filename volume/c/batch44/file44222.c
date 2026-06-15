// fichero 44222 -- macros y constantes -- MODIFICADO
#define LIMITE_44222 44422
#define FACTOR_44222 4

int aplicar_limite44222(int valor) {
    if (valor > LIMITE_44222) return LIMITE_44222;
    return valor * FACTOR_44222;
}
