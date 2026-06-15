// fichero 46934 -- macros y constantes -- MODIFICADO
#define LIMITE_46934 47134
#define FACTOR_46934 6

int aplicar_limite46934(int valor) {
    if (valor > LIMITE_46934) return LIMITE_46934;
    return valor * FACTOR_46934;
}
