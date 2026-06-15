// fichero 43042 -- macros y constantes -- MODIFICADO
#define LIMITE_43042 43242
#define FACTOR_43042 4

int aplicar_limite43042(int valor) {
    if (valor > LIMITE_43042) return LIMITE_43042;
    return valor * FACTOR_43042;
}
