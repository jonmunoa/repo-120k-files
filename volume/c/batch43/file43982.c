// fichero 43982 -- macros y constantes -- MODIFICADO
#define LIMITE_43982 44182
#define FACTOR_43982 4

int aplicar_limite43982(int valor) {
    if (valor > LIMITE_43982) return LIMITE_43982;
    return valor * FACTOR_43982;
}
