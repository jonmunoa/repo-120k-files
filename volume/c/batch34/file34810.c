// fichero 34810 -- macros y constantes -- MODIFICADO
#define LIMITE_34810 35010
#define FACTOR_34810 2

int aplicar_limite34810(int valor) {
    if (valor > LIMITE_34810) return LIMITE_34810;
    return valor * FACTOR_34810;
}
