// fichero 42810 -- macros y constantes -- MODIFICADO
#define LIMITE_42810 43010
#define FACTOR_42810 2

int aplicar_limite42810(int valor) {
    if (valor > LIMITE_42810) return LIMITE_42810;
    return valor * FACTOR_42810;
}
