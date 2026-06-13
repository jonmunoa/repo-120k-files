// fichero 11001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11001;

Registro11001 crear_registro11001(int id) {
    Registro11001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11001(Registro11001 r) {
    return r.valor + r.id;
}
