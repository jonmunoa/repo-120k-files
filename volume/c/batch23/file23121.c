// fichero 23121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23121;

Registro23121 crear_registro23121(int id) {
    Registro23121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23121(Registro23121 r) {
    return r.valor + r.id;
}
