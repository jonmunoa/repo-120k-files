// fichero 41445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41445;

Registro41445 crear_registro41445(int id) {
    Registro41445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41445(Registro41445 r) {
    return r.valor + r.id;
}
