// fichero 46150 -- macros y constantes -- MODIFICADO
#define LIMITE_46150 46350
#define FACTOR_46150 2

int aplicar_limite46150(int valor) {
    if (valor > LIMITE_46150) return LIMITE_46150;
    return valor * FACTOR_46150;
}
