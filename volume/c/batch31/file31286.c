// fichero 31286 -- macros y constantes -- MODIFICADO
#define LIMITE_31286 31486
#define FACTOR_31286 3

int aplicar_limite31286(int valor) {
    if (valor > LIMITE_31286) return LIMITE_31286;
    return valor * FACTOR_31286;
}
