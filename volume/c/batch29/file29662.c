// fichero 29662 -- macros y constantes -- MODIFICADO
#define LIMITE_29662 29862
#define FACTOR_29662 4

int aplicar_limite29662(int valor) {
    if (valor > LIMITE_29662) return LIMITE_29662;
    return valor * FACTOR_29662;
}
