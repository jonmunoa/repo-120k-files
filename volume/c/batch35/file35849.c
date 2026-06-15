// fichero 35849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35849;

Registro35849 crear_registro35849(int id) {
    Registro35849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
