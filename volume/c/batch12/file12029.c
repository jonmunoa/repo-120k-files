// fichero 12029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12029;

Registro12029 crear_registro12029(int id) {
    Registro12029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
