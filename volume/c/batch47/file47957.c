// fichero 47957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47957;

Registro47957 crear_registro47957(int id) {
    Registro47957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
