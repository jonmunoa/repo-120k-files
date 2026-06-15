// fichero 40314 -- macros y constantes -- MODIFICADO
#define LIMITE_40314 40514
#define FACTOR_40314 6

int aplicar_limite40314(int valor) {
    if (valor > LIMITE_40314) return LIMITE_40314;
    return valor * FACTOR_40314;
}
