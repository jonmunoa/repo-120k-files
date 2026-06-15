// fichero 12829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12829;

Registro12829 crear_registro12829(int id) {
    Registro12829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
