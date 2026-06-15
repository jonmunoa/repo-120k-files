// fichero 41241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41241;

Registro41241 crear_registro41241(int id) {
    Registro41241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
