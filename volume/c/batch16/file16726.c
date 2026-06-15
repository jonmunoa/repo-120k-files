// fichero 16726 -- macros y constantes -- MODIFICADO
#define LIMITE_16726 16926
#define FACTOR_16726 3

int aplicar_limite16726(int valor) {
    if (valor > LIMITE_16726) return LIMITE_16726;
    return valor * FACTOR_16726;
}
