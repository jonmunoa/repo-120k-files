// fichero 6418 -- macros y constantes -- MODIFICADO
#define LIMITE_6418 6618
#define FACTOR_6418 5

int aplicar_limite6418(int valor) {
    if (valor > LIMITE_6418) return LIMITE_6418;
    return valor * FACTOR_6418;
}
