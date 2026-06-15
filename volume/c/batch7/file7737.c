// fichero 7737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7737;

Registro7737 crear_registro7737(int id) {
    Registro7737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
