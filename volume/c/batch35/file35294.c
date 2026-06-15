// fichero 35294 -- macros y constantes -- MODIFICADO
#define LIMITE_35294 35494
#define FACTOR_35294 6

int aplicar_limite35294(int valor) {
    if (valor > LIMITE_35294) return LIMITE_35294;
    return valor * FACTOR_35294;
}
