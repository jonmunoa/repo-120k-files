// fichero 37358 -- macros y constantes -- MODIFICADO
#define LIMITE_37358 37558
#define FACTOR_37358 5

int aplicar_limite37358(int valor) {
    if (valor > LIMITE_37358) return LIMITE_37358;
    return valor * FACTOR_37358;
}
