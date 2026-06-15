// fichero 12949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12949;

Registro12949 crear_registro12949(int id) {
    Registro12949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
