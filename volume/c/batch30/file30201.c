// fichero 30201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30201;

Registro30201 crear_registro30201(int id) {
    Registro30201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
