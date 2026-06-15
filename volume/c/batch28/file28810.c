// fichero 28810 -- macros y constantes -- MODIFICADO
#define LIMITE_28810 29010
#define FACTOR_28810 2

int aplicar_limite28810(int valor) {
    if (valor > LIMITE_28810) return LIMITE_28810;
    return valor * FACTOR_28810;
}
