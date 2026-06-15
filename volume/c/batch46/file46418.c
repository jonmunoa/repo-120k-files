// fichero 46418 -- macros y constantes -- MODIFICADO
#define LIMITE_46418 46618
#define FACTOR_46418 5

int aplicar_limite46418(int valor) {
    if (valor > LIMITE_46418) return LIMITE_46418;
    return valor * FACTOR_46418;
}
