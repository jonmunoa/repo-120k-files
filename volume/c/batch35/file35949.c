// fichero 35949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35949;

Registro35949 crear_registro35949(int id) {
    Registro35949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
