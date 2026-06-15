// fichero 37810 -- macros y constantes -- MODIFICADO
#define LIMITE_37810 38010
#define FACTOR_37810 2

int aplicar_limite37810(int valor) {
    if (valor > LIMITE_37810) return LIMITE_37810;
    return valor * FACTOR_37810;
}
