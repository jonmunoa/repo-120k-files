// fichero 46278 -- macros y constantes -- MODIFICADO
#define LIMITE_46278 46478
#define FACTOR_46278 5

int aplicar_limite46278(int valor) {
    if (valor > LIMITE_46278) return LIMITE_46278;
    return valor * FACTOR_46278;
}
