// fichero 44314 -- macros y constantes -- MODIFICADO
#define LIMITE_44314 44514
#define FACTOR_44314 6

int aplicar_limite44314(int valor) {
    if (valor > LIMITE_44314) return LIMITE_44314;
    return valor * FACTOR_44314;
}
