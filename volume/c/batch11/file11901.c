// fichero 11901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11901;

Registro11901 crear_registro11901(int id) {
    Registro11901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11901(Registro11901 r) {
    return r.valor + r.id;
}
