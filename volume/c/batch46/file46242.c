// fichero 46242 -- macros y constantes -- MODIFICADO
#define LIMITE_46242 46442
#define FACTOR_46242 4

int aplicar_limite46242(int valor) {
    if (valor > LIMITE_46242) return LIMITE_46242;
    return valor * FACTOR_46242;
}
