// fichero 38242 -- macros y constantes -- MODIFICADO
#define LIMITE_38242 38442
#define FACTOR_38242 4

int aplicar_limite38242(int valor) {
    if (valor > LIMITE_38242) return LIMITE_38242;
    return valor * FACTOR_38242;
}
