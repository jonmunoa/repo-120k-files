// fichero 45918 -- macros y constantes -- MODIFICADO
#define LIMITE_45918 46118
#define FACTOR_45918 5

int aplicar_limite45918(int valor) {
    if (valor > LIMITE_45918) return LIMITE_45918;
    return valor * FACTOR_45918;
}
