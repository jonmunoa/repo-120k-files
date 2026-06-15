// fichero 41194 -- macros y constantes -- MODIFICADO
#define LIMITE_41194 41394
#define FACTOR_41194 6

int aplicar_limite41194(int valor) {
    if (valor > LIMITE_41194) return LIMITE_41194;
    return valor * FACTOR_41194;
}
