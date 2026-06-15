// fichero 40982 -- macros y constantes -- MODIFICADO
#define LIMITE_40982 41182
#define FACTOR_40982 4

int aplicar_limite40982(int valor) {
    if (valor > LIMITE_40982) return LIMITE_40982;
    return valor * FACTOR_40982;
}
