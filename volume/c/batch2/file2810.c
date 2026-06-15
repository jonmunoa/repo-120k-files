// fichero 2810 -- macros y constantes -- MODIFICADO
#define LIMITE_2810 3010
#define FACTOR_2810 2

int aplicar_limite2810(int valor) {
    if (valor > LIMITE_2810) return LIMITE_2810;
    return valor * FACTOR_2810;
}
