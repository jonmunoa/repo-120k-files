// fichero 20982 -- macros y constantes -- MODIFICADO
#define LIMITE_20982 21182
#define FACTOR_20982 4

int aplicar_limite20982(int valor) {
    if (valor > LIMITE_20982) return LIMITE_20982;
    return valor * FACTOR_20982;
}
