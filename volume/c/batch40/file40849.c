// fichero 40849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40849;

Registro40849 crear_registro40849(int id) {
    Registro40849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40849(Registro40849 r) {
    return r.valor + r.id;
}
