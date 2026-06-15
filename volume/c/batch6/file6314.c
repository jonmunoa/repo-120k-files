// fichero 6314 -- macros y constantes -- MODIFICADO
#define LIMITE_6314 6514
#define FACTOR_6314 6

int aplicar_limite6314(int valor) {
    if (valor > LIMITE_6314) return LIMITE_6314;
    return valor * FACTOR_6314;
}
