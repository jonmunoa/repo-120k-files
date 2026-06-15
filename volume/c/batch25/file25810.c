// fichero 25810 -- macros y constantes -- MODIFICADO
#define LIMITE_25810 26010
#define FACTOR_25810 2

int aplicar_limite25810(int valor) {
    if (valor > LIMITE_25810) return LIMITE_25810;
    return valor * FACTOR_25810;
}
