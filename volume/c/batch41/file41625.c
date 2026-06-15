// fichero 41625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41625;

Registro41625 crear_registro41625(int id) {
    Registro41625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
