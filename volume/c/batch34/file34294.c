// fichero 34294 -- macros y constantes -- MODIFICADO
#define LIMITE_34294 34494
#define FACTOR_34294 6

int aplicar_limite34294(int valor) {
    if (valor > LIMITE_34294) return LIMITE_34294;
    return valor * FACTOR_34294;
}
