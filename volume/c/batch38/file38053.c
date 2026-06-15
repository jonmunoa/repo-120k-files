// fichero 38053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38053;

Registro38053 crear_registro38053(int id) {
    Registro38053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
