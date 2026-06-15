// fichero 25153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25153;

Registro25153 crear_registro25153(int id) {
    Registro25153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
