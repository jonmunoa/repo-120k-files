// fichero 46314 -- macros y constantes -- MODIFICADO
#define LIMITE_46314 46514
#define FACTOR_46314 6

int aplicar_limite46314(int valor) {
    if (valor > LIMITE_46314) return LIMITE_46314;
    return valor * FACTOR_46314;
}
