// fichero 8829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8829;

Registro8829 crear_registro8829(int id) {
    Registro8829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
