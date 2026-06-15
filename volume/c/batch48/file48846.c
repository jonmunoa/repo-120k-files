// fichero 48846 -- macros y constantes -- MODIFICADO
#define LIMITE_48846 49046
#define FACTOR_48846 3

int aplicar_limite48846(int valor) {
    if (valor > LIMITE_48846) return LIMITE_48846;
    return valor * FACTOR_48846;
}
