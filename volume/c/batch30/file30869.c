// fichero 30869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30869;

Registro30869 crear_registro30869(int id) {
    Registro30869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
