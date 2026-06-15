// fichero 35737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35737;

Registro35737 crear_registro35737(int id) {
    Registro35737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
