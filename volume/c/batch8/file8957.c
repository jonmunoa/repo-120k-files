// fichero 8957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8957;

Registro8957 crear_registro8957(int id) {
    Registro8957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
