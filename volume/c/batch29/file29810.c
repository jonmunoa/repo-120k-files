// fichero 29810 -- macros y constantes -- MODIFICADO
#define LIMITE_29810 30010
#define FACTOR_29810 2

int aplicar_limite29810(int valor) {
    if (valor > LIMITE_29810) return LIMITE_29810;
    return valor * FACTOR_29810;
}
