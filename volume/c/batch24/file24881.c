// fichero 24881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24881;

Registro24881 crear_registro24881(int id) {
    Registro24881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
