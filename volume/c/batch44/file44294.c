// fichero 44294 -- macros y constantes -- MODIFICADO
#define LIMITE_44294 44494
#define FACTOR_44294 6

int aplicar_limite44294(int valor) {
    if (valor > LIMITE_44294) return LIMITE_44294;
    return valor * FACTOR_44294;
}
