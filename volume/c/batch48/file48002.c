// fichero 48002 -- macros y constantes -- MODIFICADO
#define LIMITE_48002 48202
#define FACTOR_48002 4

int aplicar_limite48002(int valor) {
    if (valor > LIMITE_48002) return LIMITE_48002;
    return valor * FACTOR_48002;
}
