// fichero 19810 -- macros y constantes -- MODIFICADO
#define LIMITE_19810 20010
#define FACTOR_19810 2

int aplicar_limite19810(int valor) {
    if (valor > LIMITE_19810) return LIMITE_19810;
    return valor * FACTOR_19810;
}
