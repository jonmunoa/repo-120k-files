// fichero 46350 -- macros y constantes -- MODIFICADO
#define LIMITE_46350 46550
#define FACTOR_46350 2

int aplicar_limite46350(int valor) {
    if (valor > LIMITE_46350) return LIMITE_46350;
    return valor * FACTOR_46350;
}
