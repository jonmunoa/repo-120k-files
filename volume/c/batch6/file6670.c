// fichero 6670 -- macros y constantes -- MODIFICADO
#define LIMITE_6670 6870
#define FACTOR_6670 2

int aplicar_limite6670(int valor) {
    if (valor > LIMITE_6670) return LIMITE_6670;
    return valor * FACTOR_6670;
}
