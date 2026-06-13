// fichero 31993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31993;

Registro31993 crear_registro31993(int id) {
    Registro31993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31993(Registro31993 r) {
    return r.valor + r.id;
}
