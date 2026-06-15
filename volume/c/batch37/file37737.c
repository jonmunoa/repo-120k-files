// fichero 37737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37737;

Registro37737 crear_registro37737(int id) {
    Registro37737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
