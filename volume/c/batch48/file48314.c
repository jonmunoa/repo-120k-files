// fichero 48314 -- macros y constantes -- MODIFICADO
#define LIMITE_48314 48514
#define FACTOR_48314 6

int aplicar_limite48314(int valor) {
    if (valor > LIMITE_48314) return LIMITE_48314;
    return valor * FACTOR_48314;
}
