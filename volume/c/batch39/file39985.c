// fichero 39985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39985;

Registro39985 crear_registro39985(int id) {
    Registro39985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
