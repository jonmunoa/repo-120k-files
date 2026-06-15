// fichero 20578 -- macros y constantes -- MODIFICADO
#define LIMITE_20578 20778
#define FACTOR_20578 5

int aplicar_limite20578(int valor) {
    if (valor > LIMITE_20578) return LIMITE_20578;
    return valor * FACTOR_20578;
}
