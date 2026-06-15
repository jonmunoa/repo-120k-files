// fichero 12789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12789;

Registro12789 crear_registro12789(int id) {
    Registro12789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
