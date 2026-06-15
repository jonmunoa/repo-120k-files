// fichero 12533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12533;

Registro12533 crear_registro12533(int id) {
    Registro12533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
