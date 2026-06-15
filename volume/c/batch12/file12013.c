// fichero 12013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12013;

Registro12013 crear_registro12013(int id) {
    Registro12013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
