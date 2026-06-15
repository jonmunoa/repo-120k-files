// fichero 23350 -- macros y constantes -- MODIFICADO
#define LIMITE_23350 23550
#define FACTOR_23350 2

int aplicar_limite23350(int valor) {
    if (valor > LIMITE_23350) return LIMITE_23350;
    return valor * FACTOR_23350;
}
